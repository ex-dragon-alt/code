#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>

void lowercase(char *s);

int main()
{
    #define MAX_USERS 100
    #define MAX_CHAR_COUNT 100
    int uenum = 0;
    char role[20] = "";
    char userlog[20] = "";
    char pass[] = "";
    char admin[20] = "";
    char passencry[] = "";

    char admins[] = {

    };

    FILE *fptr;
    fptr = fopen("admin.txt", "r");

    fgets(admin, sizeof(admin), fptr);

    printf("What is your role?\n");
    printf("=> ");
    scanf("%s", &role);

    lowercase(role);

    if (strcmp(role, "admin") == 0)
    {
        printf("Admin: ");
        scanf("%s", &userlog);
        printf("Password: ");
        scanf(" %s", &pass);


        if (strcmp(userlog, admin) == 0)
        {
            printf("Admin valid\n");
        }
        else {
            printf("Admin not valid");
        }
    }




    
    /*printf("Enter the number of user you wish to enter: ");
    scanf("%i", &uenum);

    char users[MAX_USERS][MAX_CHAR_COUNT] = {};

    for (int i = 0; i < uenum; i++)
    {
        printf("Username : ");
        scanf("%99s", &users[i]);
    }
    printf("\nUsernames entered:\n");

    for (int i = 0; i < uenum; i++)
    {
        printf("Username %i : %s\n", i + 1, users[i]);
    }*/
}

void lowercase(char *s)
{
    for (int i = 0; i < strlen(s) ; i++)
    {
        s[i] = (char)tolower(s[i]);
    }
}