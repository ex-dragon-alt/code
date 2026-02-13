#include<stdio.h>
#include<string.h>

int main()
{
    char user[20] = "dragon";
    char admin[20] = "dragon";

    if (strcmp(user, admin) == 0)
    {
        printf("this runs\n");
    }
}