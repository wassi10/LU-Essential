/** " FUNCTIONS NAME "

    * Welcome
    * Menu
    * About & Work
    * Start
    * Profile
    * Services
    * CHOLO LU
    * Bus schedule
    * Starting Time
    * Return Time
    * Departure Ease
    * Tracking Result
    * Location List

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

void welcom()
{
    system("color 0B");

    int x;
    double y;
    char wel[] = "\t\t\t\t\t       >>>>>>>> LU ESSENTIALS <<<<<<<<";
    char text1[]= "\n\n\t\t\t\t\t\t\tW E L C O M E ";
    char text2[]= "\n\n\t\t\t\t\t\t\t     T O ";
    char text3[]= "\n\n\t\t\t\t  L E A D I N G   U N I V E R S I T Y   E S S E N T I A L S\n\n";

    for(x=0; wel[x]!='\0'; x++)
    {
        printf("%c",wel[x]);
        for(y=0; y<=9999999; y++)
        {
        }
    }

    printf("\n\n");
    for(x=0; text1[x]!='\0'; x++)
    {
        printf("%c",text1[x]);
        for(y=0; y<=9999999; y++)
        {
        }
    }

    for(x=0; text2[x]!='\0'; x++)
    {
        printf("%c",text2[x]);
        for(y=0; y<=9999999; y++)
        {
        }
    }

    for(x=0; text3[x]!='\0'; x++)
    {
        printf("%c",text3[x]);
        for(y=0; y<=9999999; y++)
        {
        }
    }

    menu();

}

void menu()
{

    int x;
    double y;
    char text1[] = "\n\n\t\t\t\t\t\t      1. A B O U T  &  W O R K";
    char text2[] = "\n\n\t\t\t\t\t\t      2. S T A R T";
    char text3[] = "\n\n\t\t\t\t\t\t      3. E X I T";


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

    for(x=0; text3[x]!='\0'; x++)
    {
        printf("%c",text3[x]);
        for(y=0; y<=9999999; y++)
        {
        }
    }


    while(1)
    {
        printf("\n\n\n\n\n CHOSE A NUMBER :  ");

        int choice;
        scanf("%d", &choice);

        system("cls");
        switch(choice)
        {
        case 1:
            about_work();
            break;
        case 2:
            start();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("\n Ohh No!! Wrong Choice .\n");
            printf("\n\n Press Enter to start again . ");
            getch();
            system("cls");
            menu();
        }
    }
}

void about_work()
{
    system("cls");

    /// ABOUT:
    printf("\n\n\n ABOUT:\n\n");
    printf(" Our project \"LU ESSENTIAL\" has two part. One is \"CHOLO LU\" and another is \"TRACKING CGPA\".\n");
    printf(" \"CHOLO LU\" has two sub sections, 1. Bus schedule and 2. Departure ease for traveling LU.\n");
    printf(" \"Departure ease for LU\" is about to show the distance, standard speed and minimum time to reach\n");
    printf("  LEADING UNIVERSITY from any chosen location from the route list attached with the project.\n\n");
    printf(" \"TRACKING CGPA\" has three sub sections, 1. Tracking Grade of Course(s) 2. Tracking GPA of Semester(s) and Tracking CGPA.\n");

    ///WORK:
    printf("\n\n\n WORK:\n");
    printf("\n *There you will see digits attached with every option. \n");
    printf(" you have to chose any number and simply press ENTER.\n");
    printf(" *To Exit the program press '3' and [Enter].\n");
    printf("\n\n\n PRESS [ENTER] TO GO BACK...");
    getch();
    system("cls");
    menu();

}
void start()
{
    system("cls");

    int x;
    double y;

    char text1[] = "\n\n\t\t\t IF YOU ARE ALREADY REGISTERED THAN GO TO LOGIN...";
    char text2[] = "\n\n\t\t\t\t\t\t1. R E G I S T E R";
    char text3[] = "\n\n\t\t\t\t\t\t2. L O G I N ";



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
    for(x=0; text3[x]!='\0'; x++)
    {
        printf("%c",text3[x]);
        for(y=0; y<=8888888; y++)
        {
        }
    }


    int choice;

    while(1)
    {

        printf("\n\n\n\n PRESS '0' TO GO BACK...\n");
        printf("\n ENTER YOUR CHOICE : ");

        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            registration();
            break;
        case 2:
            login();
            break;
        case 0:
            welcom();
            break;
        default:
            printf("\n\n OH NO !!! WRONG CHOICE.");
            printf("\n\n PRESS [ENTER] TO START AGAIN...");
            getch();
            system("cls");
            start();
        }
    }
}

void profile(char username[], char password[])
{
    system("cls");

    int x;
    double y;
    char text[] = "\n\n\t\t\t\t\t       P R O F I L E\n\n";

    for( x=0; text[x]!='\0'; x++)
    {
        printf("%c",text[x]);
        for( y=0; y<=9999999; y++)
        {
        }
    }


    FILE *rpro;

    rpro = fopen("User Registration.txt", "r");

    while(!feof(rpro))
    {
        fscanf(rpro,"%s",p.user_id);
        fscanf(rpro,"%s",p.password);

        if(strcmp(username,p.user_id)==0 && strcmp(password,p.password)==0)
        {

            fscanf(rpro,"%s",p.first_name);
            fscanf(rpro,"%s",p.last_name);
            fscanf(rpro,"%s",p.gender);
            fscanf(rpro,"%s",p.mail);
            fscanf(rpro,"%s",p.phone);
            fscanf(rpro,"%s",p.student_id);

            fclose(rpro);

            printf("\n\n\t\t\t\t\tU S E R   I D      : %s",p.user_id);
            printf("\n\n\t\t\t\t\tP A S S W O R D    : %s",p.password);
            printf("\n\n\t\t\t\t\tN A M E            : %s %s",p.first_name,p.last_name);
            printf("\n\n\t\t\t\t\tG E N D E R        : %s",p.gender);
            printf("\n\n\t\t\t\t\tE - M A I L        : %s",p.mail);
            printf("\n\n\t\t\t\t\tP H O N E          : %s",p.phone);
            printf("\n\n\t\t\t\t\tS T U D E N T  I D : %s\n\n",p.student_id);

            break;
        }
    }

    printf(" PRESS [ENTER] AND ENJOY OUR SERVIECES. :) ");
    getch();
    system("cls");
    services();

}

void services()
{
    system("cls");


    int x;
    double y;
    char text[] = "\n\n\t\t\t\t\t\t   S E R V I C E S \n\n";

    for( x=0; text[x]!='\0'; x++)
    {
        printf("%c",text[x]);
        for( y=0; y<=9999999; y++)
        {
        }
    }

    printf("\n\n\t\t\t\t\t1. TRAVEL TO LEADING UNIVERSITY");
    printf("\n\n\t\t\t\t\t2. TRACKING RESULT\n");


    int choice;

    while(1)
    {

        printf("\n\n\n PRESS '0' TO LOGOUT.");
        printf("\n\n ENTER YOUR CHOICE : ");

        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            cholo_LU();
            break;
        case 2:
            tracking_result();
            break;
        case 0:
            start();
            break;
        default:
            printf("\n\n OH NO !!! WRONG CHOICE.");
            printf("\n\n PRESS [ENTER] TO START AGAIN...");
            getch();
            system("cls");
            services();
        }
    }
}

void cholo_LU()
{
    system("cls");

    int x;
    double y;
    char text[] = "\n\n\t\t\t\t C H O L O   L E A D I N G   U N I V E R S I T Y\n\n";
    for(x=0; text[x]!='\0'; x++)
    {
        printf("%c",text[x]);
        for(y=0; y<=9999999; y++)
        {
        }
    }


    printf("\n\n\t\t\t\t\t  1. BUS  SCHEDULE");
    printf("\n\n\t\t\t\t\t  2. DEPARTURE EASE FOR TRAVELING\n\t\t\t\t\t     LEADING UNIVERSITY\n\n");


    int choice;

    while(1)
    {

        printf("\n\n\n PRESS '0' TO GO BACK.");
        printf("\n\n ENTER YOUR CHOICE : ");

        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            bus_schedule();
            break;
        case 2:
            departure_ease();
            break;
        case 0:
            services();
            break;
        default:
            printf("\n\n OH NO !!! WRONG CHOICE.");
            printf("\n\n PRESS [ENTER] TO START AGAIN...");
            getch();
            system("cls");
            cholo_LU();
        }
    }
}

void bus_schedule()
{
    system("cls");

    printf("\n\n\t\t\t\t\t\t  B U S   S C H E D U L E\n\n");
    printf("\n\n\t\t\t\t\t\t1. S T A R T I N   T I M E");
    printf("\n\n\t\t\t\t\t\t2. R E T U R N   T I M E");


    int choice;

    while(1)
    {

        printf("\n\n\n PRESS '0' TO GO BACK.");
        printf("\n\n ENTER YOUR CHOICE : ");

        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            starting_time();
            break;
        case 2:
            return_time();
            break;
        case 0:
            cholo_LU();
            break;
        default:
            printf("\n\n OH NO !!! WRONG CHOICE.");
            printf("\n\n PRESS [ENTER] TO START AGAIN...");
            getch();
            system("cls");
            bus_schedule();
        }
    }
}

void starting_time()
{
    system("cls");



    int choice;

    while(1)
    {

        printf("\n\n\t\t\t\t1. STARTING TIME & NO. OF BUS AS PER ROUTE.\n\n");
        printf("\t\t\t\t  1. ROUTE-1 : TILAGOR TO LU\n");
        printf("\t\t\t\t  2. ROUTE-2 : SURMA TOWER TO LU\n");
        printf("\t\t\t\t  3. ROUTE-3 : LAKKATURA TO LU\n");
        printf("\t\t\t\t  4. ROUTE-4 : TILAGOR TO LU\n");



        printf("\n\n\n PRESS '0' TO GO BACK.");
        printf("\n\n ENTER YOUR CHOICE : ");

        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            route1_LU();
            break;
        case 2:
            route2_LU();
            break;
        case 3:
            route3_LU();
            break;
        case 4:
            route4_LU();
            break;
        case 0:
            bus_schedule();
            break;
        default:
            printf("\n\n OH NO !!! WRONG CHOICE.");
            printf("\n\n PRESS [ENTER] TO START AGAIN...");
            getch();
            system("cls");
            starting_time();
        }
    }

}

void return_time()
{
    system("cls");

    printf("\n\n\t\t\t\t2. RETURN TIME & NO. OF BUS AS PER ROUTE.\n\n");
    printf("\t\t\t\t  1. ROUTE -1 : LEADING UNIVERSITY TO TILAGOR\n");
    printf("\t\t\t\t  2. ROUTE -2 : LEADING UNIVERSITY TO SURMA TOWER\n");
    printf("\t\t\t\t  3. ROUTE -3 : LEADING UNIVERSITY TO LAKKATURA\n");
    printf("\t\t\t\t  4. ROUTE -4 : LEADING UNIVERSITY TO TILAGOR\n");

    int choice;

    while(1)
    {

        printf("\n\n\n PRESS '0' TO GO BACK.");
        printf("\n\n ENTER YOUR CHOICE : ");

        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            LeadingUniversityTilagor();
            break;
        case 2:
            LeadingUniversitySurmaTower();
            break;
        case 3:
            LeadingUniversityLakkatura();
            break;
        case 4:
            LeadingUniversityTilagorr();
            break;
        case 0:
            bus_schedule();
            break;
        default:
            printf("\n\n OH NO !!! WRONG CHOICE.");
            printf("\n\n PRESS [ENTER] TO START AGAIN...");
            getch();
            system("cls");
            return_time();
        }
    }

}

void departure_ease()
{
    system("cls");

    location_list();

    while(1)
    {
        printf("\n\n\n PRESS '0' TO GO BACK.");
        printf("\n\n ENTER YOUR CHOICE : ");

        int loc_num;
        scanf("%d", &loc_num);

        switch(loc_num)
        {
        case 1:
            tilagor_to_lu();
            break;
        case 2:
            Amborkhana_to_lu();
            break;
        case 3:
            Pathantula_to_lu();
            break;
        case 4:
            SUST_Gate_to_lu();
            break;
        case 5:
            Shibgonj_to_lu();
            break;
        case 6:
            jitumiya_to_LU();
            break;
        case 7:
            radiooffice_to_lu();
            break;
        case 8:
            Khasdobir_to_lu();
            break;
        case 9:
            eidgah_to_lu();
            break;
        case 10:
            baluchar_to_lu();
            break;
        case 11:
            Dorshondewri_to_lu();
            break;
        case 12:
            Modina_market_to_lu();
            break;
        case 13:
            TemukhiBridge_to_lu();
            break;
        case 14:
            Naiorpul_to_lu();
            break;
        case 15:
            rikabibazar_to_lu();
            break;
        case 16:
            Lakkatura_To_LU();
            break;
        case 17:
            Subhanighat_to_lu();
            break;
        case 18:
            Bypass_to_lu();
            break;
        case 19:
            tb_gate_to_lu();
            break;
        case 20:
            subidbazar_to_lu();
            break;
        case 21:
            Akhaliya_Mosque_to_lu();
            break;
        case 22:
            Londoni_road_to_lu();
            break;
        case 23:
            surmatower_To_LU();
            break;
        case 24:
            lamabazar_to_lu();
            break;
        case 25:
            Chowkidheki_to_LU();
            break;
        case 26:
            Rose_view_to_lu();
            break;
        case 27:
            electric_supply_road_to_lu();
            break;
        case 28:
            Londoni_road_to_lu();
            break;
        case 29:
            Humayun_Rashid_Chattar_to_lu();
            break;
        case 30:
            RailCrossingRagibNagar_to_lu();
            break;
        case 31:
            Osmani_park();
            break;
        case 32:
            Mozumder_Fulkoli();
            break;
        case 0:
            system("cls");
            cholo_LU();
            break;
        default :
            printf("\n\n OH NO !!! WRONG CHOICE.");
            printf("\n\n PRESS [ENTER] TO START AGAIN...");
            getch();
            system("cls");
            departure_ease();
        }
    }
}

void tracking_result()
{
    system("cls");

    printf("\n\n\t\t\t\t\tT R A C K I N G   R E S U L T S\n\n");
    printf("\n\n\t\t\t\t\t1. TRACKING GRADE OF COURSE(S).");
    printf("\n\n\t\t\t\t\t2. TRACKING GPA OF SEMESTER(S).");
    printf("\n\n\t\t\t\t\t3. TRACKING CGPA.\n");


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
        case 2:
            GPA();
            break;
        case 3:
            CGPA();
            break;
        case 0:
            services();
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

void location_list()
{
    system("cls");

    /// Location list :
    printf("\n\n\n LOCATION LIST OF BUS STOPPAGES : \n\n");
    printf("     1. TILAGOR                9. EIDGAH PT.            17. SUBHANIGHAT PT.           25. CHOWKIDHEKI PT.\n");
    printf("     2. AMBERKHANA            10. BALUCHAR              18. BYPASS                    26. ROSE VIEW PT.\n");
    printf("     3. PATHANTULA            11. DORSHONDEWRY          19. TB GATE                   27. ELECTRIC SUPPLY\n");
    printf("     4. SUST GATE             12. MODINA MARKET         20. SUBIDBAZAR                28. LONDONY ROAD\n");
    printf("     5. SHIBGONJ              13. TEMUKHI BAZAR         21. AKHALIA MOSQUE            29. HUMAYUN RASHID CHATTAR\n");
    printf("     6. JITUMIAR PT.          14. Naiorpul              22. CHANDIPUL                 30. RAGIB NAGAR RAIL CROSSING\n");
    printf("     7. RADIO OFFICE          15. RIKABIBAZAR           23. SURMA TOWER               31. OSMANI PARK\n");
    printf("     8. KHASHDOBIR            16. LAKKATURA             24. LAMABAZAR                 32. MOJUMDAR FULKOLI\n\n\n");
}

