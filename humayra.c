/** " FUNCTIONS NAME

    * Registration
    * Bus Route 1

*/

#include <stdio.h>
#include <string.h>
#include <conio.h>

struct person_info
{
    char first_name[20];
    char last_name[12];
    char gender[5];
    char mail[20];
    char phone[12];
    char student_id[12];
    char user_id[10];
    char password[12];

} p;


void registration()
{
    system("cls");


    int x;
    double y;
    char text[] = "\n\n\t\t\t\t\t R E G I S T R A T I O N\n\n";

    for( x=0; text[x]!='\0'; x++)
    {
        printf("%c",text[x]);
        for( y=0; y<=9999999; y++)
        {
        }
    }


    printf("\n\n\t\t\t\t\t# PERSONAL INFORMATIONS :-\n");

    /** User Input*/
    gets(p.first_name);
    printf("\n\n\t\t\t\tF I R S T  N A M E : ");
    gets(p.first_name);
    printf("\n\n\t\t\t\tL A S T  N A M E   : ");
    gets(p.last_name);
    printf("\n\n\t\t\t\tG E N D E R        : ");
    gets(p.gender);
    printf("\n\n\t\t\t\tE - M A I L        : ");
    gets(p.mail);
    printf("\n\n\t\t\t\tP H O N E          : ");
    gets(p.phone);
    printf("\n\n\t\t\t\tS T U D E N T  I D : ");
    gets(p.student_id);

    printf("\n\n\t\t\t\t\t# SECURITY INFORMATIONS :-\n");

    printf("\n\n\t\t\t\tU S E R   I D      : ");
    gets(p.user_id);
    printf("\n\n\t\t\t\tP A S S W O R D    : ");
    gets(p.password);
    ///----------x----------


    /** Store in file */
    FILE *fptr;///, *sec, *pro;

    fptr = fopen("User Registration.txt","a");

    fprintf(fptr, p.user_id);
    fputs("\n",fptr);

    fprintf(fptr, p.password);
    fputs("\n",fptr);

    fprintf(fptr, p.first_name);
    fputs("\n",fptr);

    fprintf(fptr, p.last_name);
    fputs("\n",fptr);

    fprintf(fptr, p.gender);
    fputs("\n",fptr);

    fprintf(fptr, p.mail);
    fputs("\n",fptr);

    fprintf(fptr, p.phone);
    fputs("\n",fptr);

    fprintf(fptr, p.student_id);
    fputs("\n",fptr);

    fputs("\n",fptr);

    fclose(fptr);

    printf("\n\n\n YOUR REGISTRATION IS SUCCESSFULLY COMPLETED. :)\n PRESS '1' TO LOGIN : ");

    int d;
    scanf("%d",&d);
    if(d == 1) login();

    system("cls");

}


void tilagor_to_lu()
{
    printf("\n\n FROM TILAGOR TO LEADING UNIVERSITY.\n\n");
    printf(" Distance       : 15km\n");
    printf(" Normal Speed   : 42km/h\n");
    printf(" T i m e        : 40min\n");
}
void baluchar_to_lu()
{
    printf("\n\n FROM BALUCHAR POINT TO LEADING UNIVERSITY.\n\n");
    printf(" Distance       : 14.5km\n");
    printf(" Normal Speed   : 42km/h\n");
    printf(" T i m e        : 40min\n");

}
void tb_gate_to_lu()
{
    printf("\n\n FROM TB GATE POINT TO LEADING UNIVERSITY.\n\n");
    printf(" Distance       : 14km\n");
    printf(" Normal Speed   : 42km/h\n");
    printf(" T i m e        : 39min\n");

}
void eidgah_to_lu()
{
    printf("\n\n FROM EIDGAH POINT TO LEADING UNIVERSITY.\n\n");
    printf(" Distance       : 9.5km\n");
    printf(" Normal Speed   : 42km/h\n");
    printf(" T i m e        : 30min\n");

}
void electric_supply_road_to_lu()
{
    printf("\n\n FROM ELECTRIC SUPPLY ROAD TO LEADING UNIVERSITY.\n\n");
    printf(" Distance       : 12km\n");
    printf(" Normal Speed   : 42km/h\n");
    printf(" T i m e        : 33min\n");

}
