# YouTube Video Downloader

A Python script that downloads YouTube videos in Full HD quality.

## Features
- ✅ Downloads videos in the highest quality available (1080p Full HD)
- 📊 Shows download progress with speed and ETA
- 📁 Customizable output directory
- 🚀 Easy to use - just provide a URL
- ⚡ Automatic MP4 conversion

## Prerequisites

Before running the downloader, ensure you have:
1. Python 3.7 or higher installed
2. FFmpeg installed (for video conversion)

### Installing FFmpeg

**On Ubuntu/Debian:**
```bash
sudo apt-get update
sudo apt-get install ffmpeg
```

**On macOS:**
```bash
brew install ffmpeg
```

**On Windows:**
Download from https://ffmpeg.org/download.html or use:
```bash
choco install ffmpeg
```

## Installation

1. Install Python dependencies:
```bash
pip install -r requirements.txt
```

## Usage

### Method 1: Command Line Argument
```bash
python3 index.py "https://www.youtube.com/watch?v=VIDEO_ID"
```

### Method 2: Specify Custom Output Directory
```bash
python3 index.py "https://www.youtube.com/watch?v=VIDEO_ID" "/path/to/output"
```

### Method 3: Interactive Prompt
```bash
python3 index.py
```
Then follow the prompts to enter the URL and output directory.

## Example

```bash
python3 index.py "https://www.youtube.com/watch?v=dQw4w9WgXcQ" "/home/user/Videos"
```

Output:
```
============================================================
🎥 YouTube Video Downloader (Full HD)
============================================================

📥 Downloading: https://www.youtube.com/watch?v=dQw4w9WgXcQ
📁 Saving to: /home/user/Videos

⏳ Progress: 45.2% | Speed: 2.5MB/s | ETA: 1m 23s
✓ Download phase finished. Starting post-processing...

✅ Download completed successfully!
📄 File: /home/user/Videos/Video Title.mp4
```

## Troubleshooting

**Issue: "FFmpeg not found"**
- Install FFmpeg using the installation steps above

**Issue: "Video not available"**
- The video may be private, age-restricted, or removed from YouTube
- Try the video in a browser first to verify access

**Issue: "No quality available"**
- The script will automatically fall back to the best available quality
- Full HD videos may not be available for all YouTube content

## Notes

- Downloads are saved in MP4 format by default
- The script respects YouTube's terms of service for personal use
- Ensure you have permission to download videos you're accessing
- Downloaded videos are saved with their original titles

## License

This tool is provided as-is for educational and personal use.
