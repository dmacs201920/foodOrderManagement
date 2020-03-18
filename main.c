/*
                           THIS PROGRAMME IS A MINI PROJECT AND AIMS TO FULLFILL THE REQUIREMENT OF HOTEL AND FOOD ORDER MANAGEMENT

                                	 	 CREATED BY: SANDEEP.S.S (REG NO 173210)
	 	       				             A.J.V.M.ARUN (REG NO 173217)
                                				  DATE:20/1/2020
*/
#include"header.h"
void main()
{
    FILE *f=stdin;
    ssize_t nchr = 0;
    char pw[35] = {0},*p = pw;
    while(1)
    {   
	system("clear");
	printf("\n\n");
	printf("                                        .*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*. \n");
	printf("                                        .*                       WELCOME TO GREEN TREE MULTICUISINE RESTAURANT                         *. \n");
	printf("                                        .*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*. \n\n\n");
	printf("\t\t\t1.ADMIN-->\n\n\t\t\t2.CUSTOMER-->\n\n\t\t\t3.ABOUT US-->\n\n\t\t\t4.EXIT-->\n\n\n");
	printf("\t ENTER YOUR CHOICE-->");

	char choice;
	scanf("%c",&choice);
	switch(choice)
	{
	    case'1':
		system("clear");
		printf("PLEASE ENTER THE PASSWORD :  ");
		getchar();
		nchr = getpasswd (&p,35,' ', f);
		if(Password(p)==1)
		{
		   // getchar();
		    printf("\n\n");
		    administration();
		}
		break;

	    case'2':
		printf("\n\n");
		order();
		break;

	    case'3':
		getchar();
		system("clear");
		printf("PEOPLE BEHIND THIS PROJECT :\n\n   -->SANDEEP.S.S\n\n   -->ARUN ADABALA\n\n ");
		printf("\n\n\n*****************************THANK YOU*****************************\n\n\n");
		printf("\n\n");
		printf("    Press ENTER To Go Back.");
		getchar();
		break;

	    case'4':
		system("clear");
		printf("\n\n\n");
		printf("\t\t\t*******************************THANK YOU**************************************\n");

		printf("****************  Feeling HUNGRY..?   ..Call or Walk-In GREEN TREE MULTICUSINE RESTURANT..  ***************\n\n");
		exit(0);
		break;

	    default:
		printf("ERROR..! PLEASE ENTER CORRECT INPUT....");
		break;
	}
    }
}

void administration(void)
{
    system("clear");
    printf("**************************************WELCOME TO THE ADMINISTRATION  SECTION************************************************\n\n");
    printf("\t\t1. Add New Record\n\n\t\t2. Search Record\n\n\t\t3. Delete Record\n\n\t\t4. View Records\n\n\t\t5. Modify Record\n\n\t\t6. View Orders Today\n\n\t\t7. Back To Main Menu\n\n\t\tEnter Your Choice --->");
    char choice;
    printf("\n\n");
    int wait;
    scanf("%c",&choice);
    for(wait=0;wait<=10000;wait++)
	printf("\rIn progress : %d",wait/1000);
    printf("\n\n");
    if(choice=='1')
	addrecord();
    else if(choice=='2')
	searchrecord();
    else if(choice=='3')
	deleterecord();
    else if(choice=='4')
	viewrecord();
    else if(choice=='5')
	modifyrecord();
    else if(choice=='6')
	orderstoday();
    else if(choice=='7')
    {
	system("clear");
	getchar();
	printf("\n\n");
	main();
    }
    else
    {
	printf("Wrong Input !! PLease Re-enter The Correct Option");
	if(getchar())
	{
	    printf("\n\n");
	    administration();
	}
    }
}


void customer(void)
{

    system("clear");
    printf("                    ************************************************\n                                      WELCOME\n                    ************************************************\n\n");
    printf("               YOU ARE--->\n\n               1. Vegetarian\n\n               2. Non Vegetarian\n\n                      OR\n\n               3. Back \n\n   Enter Your Choice  -->");
    char k;
    scanf("%c",&k);
    int wait;
    printf("In progress :");
    for(wait=0;wait<=5000;wait++)
    {
	printf("\rIn progress : %d",wait/500);
    }
    if(k=='1')
    {
	system("clear");
	printf("\n\n");
	vegetarian();
    }
    else if(k=='2')
    {
	system("clear");
	printf("\n\n");
	nonvegetarian();
    }
    else if(k=='3')
    {
	system("clear");
	getchar();
	printf("\n\n");
	order();
    }
    else
    {
	printf("Wrong Input !Please Re-enter The Correct Option......\n\n");
	printf("\n\n");
	customer();
    }
}

void order(void)
{
    int view;
    system("clear");
    printf("                    ************************************************\n                                      WELCOME\n                    ************************************************\n\n");
    printf("               YOU WANT TO--->\n\n               1. Place order\n\n               2. Cancel order\n\n               3. View Order Details\n\n	       4. Back To Main Menu\n\n   Enter Your Choice  -->");
    char k;
    scanf("%c",&k);
    int wait;
    printf("In progress :");
    for(wait=0;wait<=5000;wait++)
    {
	printf("\rIn progress : %d",wait/500);
    }
    if(k=='1')
    {
	printf("\n\n");
	system("clear");
	customer();
    }
    else if(k=='2')
    {
	printf("\n\n");
	system("clear");
	deleteorder();
    }
    else if(k=='3')
    {
	printf("\n\n");
	system("clear");
	view=viewdetails();
	if(view==0)
	{
	    printf("                       ======================================================================================                 \n");
	    printf("                       ||                           ....NO RECORD FOUND....                                ||		  \n");
	    printf("                       ======================================================================================                 \n");
	    printf("\n\n\n...press ENTER to continue...\n");
	    getchar();
	    getchar();
	}
	    order();
    }
    else if(k=='4')
    {
	printf("\n\n");
	system("clear");
	getchar();
	main();
    }
    else
    {
	printf("Wrong Input !Please Re-enter The Correct Option......\n\n");
	order();
    }
}
