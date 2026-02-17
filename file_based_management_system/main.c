#include<ctype.h>
#include<stdbool.h>
#include<stdio.h>
#include<string.h>

void lowercase(char *s);
void adduser();
void confirmuser();
void confirmadmin();

struct admin {
    char name[20];
    char pass[20];
};
struct user
{
    char name[20];
    char pass[20];
};

int main(){
    FILE *fp;
    fp = fopen("admin.txt", "r");

    if (fp != NULL)
    {
        char l1 = ' ';

        do {
            printf("\t\t\t\t\tFile Manager\n\n");

            printf("1. Super-User Log-In\n");
            printf("2. Log-In\n");
            printf("3. Sign-up\n");
            printf("4. Exit.\n");
            printf("What action do you wish to take?\n");
            printf("=> ");
            scanf("%c", &l1);

            if (strcmp(l1, 1) == 0)
            {
                char name;
                char pass;
                FILE *fp;
                fp = fopen("admin.txt", "r");
                
                
            }

        }while(strcmp(l1, 1) == 1 || strcmp(l1, 2) == 1 || strcmp(l1, 3) == 1 || strcmp(l1, 4) == 1);
    }
    else {
        struct admin ami;

        printf("Create the Super-User\n");
        printf("Super-User ID       : ");
        scanf("%s", ami.name);
        printf("Super-User Password : ");
        sacnf("%s", ami.pass);

        char l1 = ' ';

        do {
            printf("\t\t\t\t\tFile Manager\n\n");

            printf("1. Super-User Log-In\n");
            printf("2. Log-In\n");
            printf("3. Sign-up\n");
            printf("4. Exit.\n");
            printf("What action do you wish to take?\n");
            printf("=> ");
            scanf("%c", &l1);

            if (strcmp(l1, 1) == 0)
            {
                char name;
                char pass;
                
                
            }

        }while(strcmp(l1, 1) == 1 || strcmp(l1, 2) == 1 || strcmp(l1, 3) == 1 || strcmp(l1, 4) == 1);
    }
}

void confirmadmin(char *name, char *pass){

    char logid;
    char logpass; 
    FILE *fp;
    fp = fopen("admin.txt", "r");

    while(fgets(logid, sizeof(logid), fp)){
        
    }
}