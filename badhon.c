/** " FUNCTIONS NAME "

    * Login
    * Bus Route 3

*/

#include <stdio.h>
#include <string.h>
#include <conio.h>

struct person_security
{
    char user_id[10];
    char password[12];

} s;

void login()
{
    getchar();
    system("cls");

    int x;
    double y;
    char text[] = "\n\n\t\t\t\t\t    L O G I N \n\n";

    for( x=0; text[x]!='\0'; x++)
    {
        printf("%c",text[x]);
        for( y=0; y<=9999999; y++)
        {
        }
    }



    char username[20],password[12];


    printf("\n\t\t\t\t    U S E R   I D     : ");
    gets(username);


    printf("\n\n\t\t\t\t    P A S S W O R D   : ");
    gets(password);


    FILE *log;

    log = fopen("User Registration.txt", "r");


    int flag = 0;

    while(!feof(log))
    {
        fscanf(log,"%s",s.user_id);
        fscanf(log,"%s",s.password);

        if(strcmp(username,s.user_id)==0 && strcmp(password,s.password)==0)
        {
            flag = 1;
            fclose(log);
            break;
        }
    }
    if(flag==0)
    {
        printf("\n\n\n PLEASE ENTER CORRECT USER NAME & PASSWORD. :\\");
        printf("\n\n PRESS '2' TO LOGIN AGIAN : ");
        int d;
        scanf("%d",&d);
        if(d == 2) login();
        system("cls");

    }
    else
        printf("\n\n LOGIN SUCCESSFULL. :)\n");

    printf(" PRESS [ENTER] TO SEE YOUR PROFILE :) ");
    getch();
    system("cls");
    profile(username,password);
}



void Lakkatura_To_LU()
{
    printf("\n\n FROM LAKKATYRA TO LEADING UNIVERSITY.\n\n");
    printf(" Distance       : 15km\n");
    printf(" Normal speed   : 22km/h\n");
    printf(" T i m e        : 57min\n");

}
void Chowkidheki_to_LU()
{
    printf("\n\n FROM CHOWKIDHEKI TO LEADING UNIVERSITY.\n\n");
    printf(" Distance       : 13.20km\n");
    printf(" Normal speed   : 22km/h\n");
    printf(" T i m e        : 54min\n");
}
void Khasdobir_to_lu()
{
    printf("\n\n FROM KHASDOBIR TO LEADING UNIVERSITY.\n\n");
    printf(" Distance       : 12.16km\n");
    printf(" Normal speed   : 22km/h\n");
    printf(" T i m e        : 51min\n");
}
void Amborkhana_to_lu()
{
    printf("\n\n FROM AMBORKHANA TO LEADING UNIVERSITY.\n\n");
    printf(" Distance       : 11.80km\n");
    printf(" Normal speed   : 22km/h\n");
    printf(" T i m e        : 48min\n");
}
void Dorshondewri_to_lu()
{

    printf("\n\n FROM DORSHONDEWRI TO LEADING UNIVERSITY.\n\n");
    printf(" Distance       : 11.17km\n");
    printf(" Normal speed   : 22km/h\n");
    printf(" T i m e        : 45min\n");
}
