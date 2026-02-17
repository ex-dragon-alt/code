#!/usr/bin/env python3
"""
YouTube Video Downloader
Downloads YouTube videos in the highest quality (Full HD)
"""

import yt_dlp
import sys
import os
from pathlib import Path


def download_youtube_video(url, output_path="downloads"):
    """
    Download a YouTube video in Full HD quality.
    
    Args:
        url (str): The YouTube video URL
        output_path (str): Directory to save the video (default: "downloads")
    
    Returns:
        bool: True if download successful, False otherwise
    """
    
    # Create output directory if it doesn't exist
    Path(output_path).mkdir(parents=True, exist_ok=True)
    
    # Configure ydl options for Full HD quality
    ydl_opts = {
        # Download best video quality available (1080p or higher)
        'format': 'bestvideo[height<=1080]+bestaudio/best',
        'outtmpl': os.path.join(output_path, '%(title)s.%(ext)s'),
        'quiet': False,
        'no_warnings': False,
        'progress_hooks': [progress_hook],
        'postprocessors': [{
            'key': 'FFmpegVideoConvertor',
            'preferedformat': 'mp4',
        }],
    }
    
    try:
        with yt_dlp.YoutubeDL(ydl_opts) as ydl:
            print(f"\n📥 Downloading: {url}")
            print(f"📁 Saving to: {os.path.abspath(output_path)}\n")
            info = ydl.extract_info(url, download=True)
            filename = ydl.prepare_filename(info)
            print(f"\n✅ Download completed successfully!")
            print(f"📄 File: {filename}")
            return True
            
    except Exception as e:
        print(f"\n❌ Error downloading video: {str(e)}")
        return False


def progress_hook(d):
    """
    Progress hook to display download progress.
    """
    if d['status'] == 'downloading':
        percent = d['_percent_str']
        speed = d['_speed_str']
        eta = d['_eta_str']
        print(f"\r⏳ Progress: {percent} | Speed: {speed} | ETA: {eta}", end='')
    elif d['status'] == 'finished':
        print(f"\n✓ Download phase finished. Starting post-processing...")


def main():
    """
    Main function to handle command-line input and download.
    """
    
    print("=" * 60)
    print("🎥 YouTube Video Downloader (Full HD)")
    print("=" * 60)
    
    # Get URL from command-line argument or user input
    if len(sys.argv) > 1:
        url = sys.argv[1]
    else:
        url = input("\n📎 Enter YouTube URL: ").strip()
    
    if not url:
        print("❌ No URL provided. Exiting.")
        sys.exit(1)
    
    # Optional: Get custom output path
    if len(sys.argv) > 2:
        output_path = sys.argv[2]
    else:
        output_path = input("📁 Enter download directory (default: downloads): ").strip() or "downloads"
    
    # Download the video
    success = download_youtube_video(url, output_path)
    
    sys.exit(0 if success else 1)


if __name__ == "__main__":
    main()