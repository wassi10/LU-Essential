/** " FUNCTIONS NAME

    * Bus Route 4
    * Grade
    * Course Grade
    * GPA
    * CGPA

*/
#include <stdio.h>
#include <string.h>
#include <conio.h>

void Shibgonj_to_lu()
{
    printf("\n\n FROM SHIBGONJ TO LEADING UNIVERSITY.\n\n");
    printf(" Distance       : 11.8km\n");
    printf(" Normal Speed   : 45km/h\n");
    printf(" T i m e        : 15.73 min\n");
}
void Naiorpul_to_lu()
{
    printf("\n\n FROM NAIORPUL TO LEADING UNIVERSITY.\n\n");
    printf(" Distance       : 9.5km\n");
    printf(" Normal Speed   : 45km/h\n");
    printf(" T i m e        : 12.66 min\n");
}
void Subhanighat_to_lu()
{
    printf("\n\n FROM SUBHANIGHAT TO LEADING UNIVERSITY.\n\n");
    printf(" Distance       : 10.7km\n");
    printf(" Normal Speed   : 45km/h\n");
    printf(" T i m e        : 14.26 min\n");
}
void Rose_view_to_lu()
{
    printf("\n\n FROM ROSE VIEW TO LEADING UNIVERSITY.\n\n");
    printf(" Distance       : 10.2km\n");
    printf(" Normal Speed   : 45km/h\n");
    printf(" T i m e        : 13.6 min\n");
}
void Humayun_Rashid_Chattar_to_lu()
{
    printf("\n\n FROM HUMAYUN RASHID CHATTAR TO LEADING UNIVERSITY.\n\n");
    printf(" Distance       : 10.3km\n");
    printf(" Normal Speed   : 45km/h\n");
    printf(" T i m e        : 13.73 min\n");
}
void Bypass_to_lu()
{
    printf("\n\n FROM BYPASS TO LEADING UNIVERSITY.\n\n");
    printf(" Distance       : 3.9km\n");
    printf(" Normal Speed   : 45km/h\n");
    printf(" T i m e        : 5.2 min\n");
}
void Osmani_park()
{
    printf("\n\n FROM OSMANI PARK TO LEADING UNIVERSITY.\n\n");
    printf(" Distance       : 13.1km\n");
    printf(" Normal Speed   : 42km/h\n");
    printf(" T i m e        : 35 min\n");
}
void Mozumder_Fulkoli()
{
    printf("\n\n FROM MOJUMDER FULKOLI TO LEADING UNIVERSITY.\n\n");
    printf(" Distance       : 6.9km\n");
    printf(" Normal Speed   : 40km/h\n");
    printf(" T i m e        : 13 min\n");
}
void Chondipul()
{
    printf("\n\n FROM CHONDIPUL TO LEADING UNIVERSITY.\n\n");
    printf(" Distance       : 8.6km\n");
    printf(" Normal Speed   : 40km/h\n");
    printf(" T i m e        : 16 min\n");
}


int grade(double num)
{

    if(num >=0 && num <2.00)                 printf("(F)\n");
    else if(num >= 2.00 && num < 2.25)       printf("(D)\n");
    else if(num >= 2.25 && num < 2.50)       printf("(C)\n");
    else if(num >= 2.50 && num < 2.75)       printf("(C+)\n");
    else if(num >= 2.75 && num < 3.00)       printf("(B-)\n");
    else if(num >= 3.00 && num < 3.25)       printf("(B)\n");
    else if(num >= 3.25 && num < 3.50)       printf("(B+)\n");
    else if(num >= 3.50 && num < 3.75)       printf("(A-)\n");
    else if(num >= 3.75 && num < 4)          printf("(A)\n");
    else if(num == 4)                        printf("(A+)\n");
    else printf("\n\n YOUR CGPA IS NOT VALID.\n");
}

int course_grade()
{
    system("cls");

    int x;
    double y;
    char text1[] = "\n\n\t\t\t\t\t\tC A L C U L A T I N G";
    char text2[] = "\n\n\t\t\t\t\t\t      G R A D E";

    for( x=0; text1[x]!='\0'; x++)
    {
        printf("%c",text1[x]);
        for( y=0; y<=9999999; y++)
        {
        }
    }
    for( x=0; text2[x]!='\0'; x++)
    {
        printf("%c",text2[x]);
        for(y=0; y<=9999999; y++)
        {
        }
    }

    double attendence, tutorial, assignment, Mid_term, Final_exam, Presentation, viva;

    printf("\n\n\n\t\t\t\t\t\tNUMBER OF COURSES : ");
    int course;
    scanf("%d", &course);

    for(int i=1; i<=course; i++)
    {
        printf("\n\n\t\t\t\t\t\t   C O U R S E - %d\n\n", i);
        printf("\n\t\t\t\t\t\tMID TERM MARKS     : ");
        scanf("%lf", &Mid_term);
        printf("\n\t\t\t\t\t\tASSIGNMENT MARKS   : ");
        scanf("%lf", &assignment);
        printf("\n\t\t\t\t\t\tTUTORIAL MARKS     : ");
        scanf("%lf", &tutorial);
        printf("\n\t\t\t\t\t\tATTENDENCE MARKS   : ");
        scanf("%lf", &attendence);
        printf("\n\t\t\t\t\t\tFINALE EXAM MARKS  : ");
        scanf("%lf", &Final_exam);
        printf("\n\t\t\t\t\t\tPRESENTETION MARKS : ");
        scanf("%lf", &Presentation);
        printf("\n\t\t\t\t\t\tVIVA   MARKS       : ");
        scanf("%lf", &viva);

        double total_number = attendence + tutorial + assignment + Mid_term + Final_exam + Presentation + viva;

        printf("\n\t\t\t\t\t\tTOTAL MARKS WITH GRADE : %.2lf", total_number);

        if(total_number >= 0 && total_number <=39)                  printf("(F)\n");
        else if(total_number >= 40 && total_number <= 44)           printf("(D)\n");
        else if(total_number >= 45 && total_number <= 49)           printf("(C)\n");
        else if(total_number >= 50 && total_number <= 54)           printf("(C+)\n");
        else if(total_number >= 55 && total_number <= 59)           printf("(B-)\n");
        else if(total_number >= 60 && total_number <= 64)           printf("(B)\n");
        else if(total_number >= 65 && total_number <= 69)           printf("(B+)\n");
        else if(total_number >= 70 && total_number <= 74)           printf("(A-)\n");
        else if(total_number >= 75 && total_number <= 79)           printf("(A)\n");
        else if(total_number >= 80 && total_number <= 100)          printf("(A+)\n");
        else printf("\n YOUR GPA IS NOT VALID.\n");
    }

    printf("\n\n PRESS '1' TO CHECK AGAIN !!");

    int choice;

    while(1)
    {

        printf("\n\n\n PRESS '0' TO GO BACK.");
        printf("\n\n ENTER YOUR CHOICE : ");

        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            course_grade();
            break;
        case 0:
            tracking_result();
            break;
        default:
            printf("\n\n OH NO !!! WRONG CHOICE.");
            printf("\n\n PRESS [ENTER] TO START AGAIN...");
            getch();
            system("cls");
            tracking_result();
        }
    }
    system("cls");

}

int GPA()
{
    system("cls");

    int x;
    double y;
    char text1[] = "\n\n\t\t\t\t\t\t  C A L C U L A T I N G";
    char text2[] = "\n\n\t\t\t\t\t\t          G P A";

    for( x=0; text1[x]!='\0'; x++)
    {
        printf("%c",text1[x]);
        for( y=0; y<=9999999; y++)
        {
        }
    }
    for( x=0; text2[x]!='\0'; x++)
    {
        printf("%c",text2[x]);
        for(y=0; y<=9999999; y++)
        {
        }
    }


    printf("\n\n\t\t\t\t\t\tTOTATL NUMBER OF COURSES : ");
    int total_course;
    scanf("%d", &total_course);

    double weighted_point = 0;
    double total_cred = 0;


    for(int i=1; i<=total_course; i++)
    {
        double credit,point;

        printf("\n\n\t\t\t\t\t     COURSE - %d", i);

        printf("\n\n\t\t\t\t\t     CREDIT Hr   : ");
        scanf("%lf", &credit);
        printf("\n\t\t\t\t\t     GRADE POINT : ");
        scanf("%lf", &point);

        weighted_point += point*credit;

        total_cred += credit;

    }


    double gpa = weighted_point/total_cred;
    printf("\n\n\t\t\t\t\t\tY O U R  G P A : %.2lf", gpa);
    grade(gpa);


    printf("\n\n PRESS '1' TO CHECK AGAIN !!");

    int choice;

    while(1)
    {

        printf("\n\n\n PRESS '0' TO GO BACK.");
        printf("\n\n ENTER YOUR CHOICE : ");

        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            GPA();
            break;
        case 0:
            tracking_result();
            break;
        default:
            printf("\n\n OH NO !!! WRONG CHOICE.");
            printf("\n\n PRESS [ENTER] TO START AGAIN...");
            getch();
            system("cls");
            tracking_result();
        }
    }
}

int CGPA()
{
    system("cls");

    int x;
    double y;
    char text1[] = "\n\n\t\t\t\t\t\t  C A L C U L A T I N G";
    char text2[] = "\n\n\t\t\t\t\t\t        C G P A";

    for( x=0; text1[x]!='\0'; x++)
    {
        printf("%c",text1[x]);
        for( y=0; y<=9999999; y++)
        {
        }
    }
    for( x=0; text2[x]!='\0'; x++)
    {
        printf("%c",text2[x]);
        for(y=0; y<=9999999; y++)
        {
        }
    }

    printf("\n\n\t\t\t\t\t\tTOTATL NUMBER OF SEMESTERS : ");
    int total_sem;
    scanf("%d", &total_sem);

    double sum_of_credit = 0;
    double sum_weight_avg_gpa = 0;



    for(int i=1; i<=total_sem; i++)
    {
        double tot_cerdit;
        printf("\n\n\t\t\t\t\t     SEMESTER - %d", i);
        printf("\n\n\t\t\t\t\t     TOTAL CREDIT : ");
        scanf("%lf", &tot_cerdit);

        sum_of_credit+=tot_cerdit;

        printf("\n\t\t\t\t\t     SEMESTER GPA : ");
        double tot_gpa;
        scanf("%lf", &tot_gpa);
        sum_weight_avg_gpa += (tot_cerdit*tot_gpa);
    }

    double current_cgpa = sum_weight_avg_gpa/sum_of_credit;
    printf("\n\n\t\t\t\t\t\tY O U R   C G P A : %.2lf", current_cgpa);
    grade(current_cgpa);


    printf("\n\n PRESS '1' TO CHECK AGAIN !!");

    int choice;

    while(1)
    {

        printf("\n\n\n PRESS '0' TO GO BACK.");
        printf("\n\n ENTER YOUR CHOICE : ");

        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            CGPA();
            break;
        case 0:
            tracking_result();
            break;
        default:
            printf("\n\n OH NO !!! WRONG CHOICE.");
            printf("\n\n PRESS [ENTER] TO START AGAIN...");
            getch();
            system("cls");
            tracking_result();
        }
    }
}

