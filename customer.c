/*
			   THIS PROGRAMME IS A MINI PROJECT AND AIMS TO FULLFILL THE REQUIREMENT OF HOTEL AND FOOD ORDER MANAGEMENT
				   	CREATED BY: SANDEEP.S.S (REG NO 173210)
 				        	    A.J.V.M.ARUN (REG NO 173217)
				   	 DATE:20/1/2020
*/

#include"header.h"
int s;
char findrecord;
struct customer c,cust;
int id=0;
FILE *temp1,*temp2;
item i;
double total=0;





//-------------------------------------------------------------------------------------------------



//written by sandeep.s.s
void initialize(void)
{
    for(int i=0;i<32;i++)
    {
	c.order[i].flag=0;
	c.order[i].quantity=0;
	c.order[i].cost=0;
    }
}




//-------------------------------------------------------------------------------------------------



/*
int getid(int id)
{
    struct customer t;
    FILE *temp=fopen("order,txt","r");
    while(fread(&t,sizeof(t),1,temp)==1)
    {
	if(t.id==id)
	{
	    id=id+1000;
	    return id;
	}
    }
	return id;
}
*/
//-------------------------------------------------------------------------------------------------


//written by A.Arun
void vegetarian(void)
{
    int choice;
    int again;
    int quantity;
    double price=0;
    char v;
    FILE *vmenu;
    printf("\n\n");
    system("clear");
    vmenu=fopen("vegmenu.txt","rt");
    while((v=getc(vmenu))!=EOF)
    {
	printf("%c",v);
    }
    fclose(vmenu);
    printf("\n\nEnter What You Want :");
    printf("\n\n");
    scanf("%d",&choice);
    if(choice==1)
    {
	printf("Quantity :  ");
	scanf("%d",&quantity);
	total=total + 140*(quantity);
	char a[30]="Burger                ";
	if(c.order[choice-1].flag==1)
	{
	    c.order[choice-1].quantity=c.order[choice-1].quantity+quantity;
	    c.order[choice-1].cost=c.order[choice-1].cost+(140*quantity);
	}
	else
	{
	    strcpy(c.order[choice-1].item_name,a);
	    c.order[choice-1].quantity=quantity;
	    c.order[choice-1].cost=140*quantity;
	    c.order[choice-1].flag=1;
	}
	printf("\n");
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	printf("\n");
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    vegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}
    }
    else if(choice==2)
    {
	printf("Quantity :");
	scanf("%d",&quantity);
	total=total + 160*(quantity);
	char a[30]="Noodles               ";
 	if(c.order[choice-1].flag==1)
	{
	    c.order[choice-1].quantity=c.order[choice-1].quantity+quantity;
	    c.order[choice-1].cost=c.order[choice-1].cost+160*quantity;
	}
	else
	{
	    strcpy(c.order[choice-1].item_name,a);
	    c.order[choice-1].quantity=quantity;
	    c.order[choice-1].cost=160*quantity;
	    c.order[choice-1].flag=1;
	}
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    vegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}
    }
    else if(choice==3)
    {
	printf("Quantity :  ");
	scanf("%d",&quantity);
	total=total + 150*(quantity);
	char a[30]="Sandwich              ";
 	if(c.order[choice-1].flag==1)
	{
	    c.order[choice-1].quantity=c.order[choice-1].quantity+quantity;
	    c.order[choice-1].cost=c.order[choice-1].cost+150*quantity;
	}
	else
	{
	    strcpy(c.order[choice-1].item_name,a);
	    c.order[choice-1].quantity=quantity;
	    c.order[choice-1].cost=150*quantity;
	    c.order[choice-1].flag=1;
	}
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    vegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}
    }
    else if(choice==4)
    {
	printf("Quantity :");
	scanf("%d",&quantity);
	total=total + 220*(quantity);
	char a[30]="Panner Munchurian     ";
 	if(c.order[choice-1].flag==1)
	{
	    c.order[choice-1].quantity=c.order[choice-1].quantity+quantity;
	    c.order[choice-1].cost=c.order[choice-1].cost+220*quantity;
	}
	else
	{
	    strcpy(c.order[choice-1].item_name,a);
	    c.order[choice-1].quantity=quantity;
	    c.order[choice-1].cost=220*quantity;
	    c.order[choice-1].flag=1;
	}
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    vegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}
    }
    else if(choice==5)
    {
	printf("Quantity :");
	scanf("%d",&quantity);
	total=total + 200*(quantity);
	char a[30]="Mushroom  Munchurian  ";
 	if(c.order[choice-1].flag==1)
	{
	    c.order[choice-1].quantity=c.order[choice-1].quantity+quantity;
	    c.order[choice-1].cost=c.order[choice-1].cost+200*quantity;
	}
	else
	{
	    strcpy(c.order[choice-1].item_name,a);
	    c.order[choice-1].quantity=quantity;
	    c.order[choice-1].cost=200*quantity;
	    c.order[choice-1].flag=1;
	}
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    vegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}

    }

    else if(choice==6)
    {
	printf("Quantity :  ");
	scanf("%d",&quantity);
	total=total + 230*(quantity);
	char a[30]="Babycorn  Munchurian  ";
 	if(c.order[choice-1].flag==1)
	{
	    c.order[choice-1].quantity=c.order[choice-1].quantity+quantity;
	    c.order[choice-1].cost=c.order[choice-1].cost+230*quantity;
	}
	else
	{
	    strcpy(c.order[choice-1].item_name,a);
	    c.order[choice-1].quantity=quantity;
	    c.order[choice-1].cost=230*quantity;
	    c.order[choice-1].flag=1;
	}
	printf("\n");
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	printf("\n");
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    vegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}
    }
    else if(choice==7)
    { 
	printf("Quantity :");
	scanf("%d",&quantity);
	total=total + 180*(quantity);
	char a[30]="Vegetable  Munchurian ";
 	if(c.order[choice-1].flag==1)
	{
	    c.order[choice-1].quantity=c.order[choice-1].quantity+quantity;
	    c.order[choice-1].cost=c.order[choice-1].cost+180*quantity;
	}
	else
	{
	    strcpy(c.order[choice-1].item_name,a);
	    c.order[choice-1].quantity=quantity;
	    c.order[choice-1].cost=180*quantity;
	    c.order[choice-1].flag=1;
	}
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    vegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}
    }
    else if(choice==8)
    {
	printf("Quantity :  ");
	scanf("%d",&quantity);
	total=total + 210*(quantity);
	char a[30]="Methichaman (special) ";
 	if(c.order[choice-1].flag==1)
	{
	    c.order[choice-1].quantity=c.order[choice-1].quantity+quantity;
	    c.order[choice-1].cost=c.order[choice-1].cost+210*quantity;
	}
	else
	{
	    strcpy(c.order[choice-1].item_name,a);
	    c.order[choice-1].quantity=quantity;
	    c.order[choice-1].cost=210*quantity;
	    c.order[choice-1].flag=1;
	}
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    vegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}
    }
    else if(choice==9)
    {
	printf("Quantity :");
	scanf("%d",&quantity);
	total=total + 500*(quantity);
	char a[30]="Andhra Panner Biriyani";
 	if(c.order[choice-1].flag==1)
	{
	    c.order[choice-1].quantity=c.order[choice-1].quantity+quantity;
	    c.order[choice-1].cost=c.order[choice-1].cost+500*quantity;
	}
	else
	{
	    strcpy(c.order[choice-1].item_name,a);
	    c.order[choice-1].quantity=quantity;
	    c.order[choice-1].cost=500*quantity;
	    c.order[choice-1].flag=1;
	}
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    vegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}
    }
    else if(choice==10)
    {
	printf("Quantity :");
	scanf("%d",&quantity);
	total=total + 450*(quantity);
	char a[30]="Mushroom  Biriyani    ";
	if(c.order[choice-1].flag==1)
	{
	    c.order[choice-1].quantity=c.order[choice-1].quantity+quantity;
	    c.order[choice-1].cost=c.order[choice-1].cost+450*quantity;
	}
	else
	{
	    strcpy(c.order[choice-1].item_name,a);
	    c.order[choice-1].quantity=quantity;
	    c.order[choice-1].cost=450*quantity;
	    c.order[choice-1].flag=1;
	}
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    vegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}

    }

    else if(choice==11)
    {
	printf("Quantity :");
	scanf("%d",&quantity);
	total=total + 550*(quantity);
	char a[30]="Mixed  Veg  Biriyani  ";
       	if(c.order[choice-1].flag==1)
	{
	    c.order[choice-1].quantity=c.order[choice-1].quantity+quantity;
	    c.order[choice-1].cost=c.order[choice-1].cost+550*quantity;
	}
	else
	{
	    strcpy(c.order[choice-1].item_name,a);
	    c.order[choice-1].quantity=quantity;
	    c.order[choice-1].cost=550*quantity;
	    c.order[choice-1].flag=1;
	}
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    vegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}

    }

    else if(choice==12)
    {
	printf("Quantity :  ");
	scanf("%d",&quantity);
	total=total + 100*(quantity);
	char a[30]="Salads                ";
	if(c.order[choice-1].flag==1)
	{
	    c.order[choice-1].quantity=c.order[choice-1].quantity+quantity;
	    c.order[choice-1].cost=c.order[choice-1].cost+100*quantity;
	}
	else
	{
	    strcpy(c.order[choice-1].item_name,a);
	    c.order[choice-1].quantity=quantity;
	    c.order[choice-1].cost=100*quantity;
	    c.order[choice-1].flag=1;
	}
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	printf("\n");
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    vegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}
    }
    else if(choice==13)
    {
	printf("Quantity :");
	scanf("%d",&quantity);
	total=total + 120*(quantity);
	char a[30]="Ice  Cream            ";
	if(c.order[choice-1].flag==1)
	{
	    c.order[choice-1].quantity=c.order[choice-1].quantity+quantity;
	    c.order[choice-1].cost=c.order[choice-1].cost+120*quantity;
	}
	else
	{
	    strcpy(c.order[choice-1].item_name,a);
	    c.order[choice-1].quantity=quantity;
	    c.order[choice-1].cost=120*quantity;
	    c.order[choice-1].flag=1;
	}
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    vegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}
    }
    else if(choice==14)
    {
	printf("Quantity :  ");
	scanf("%d",&quantity);
	total=total + 50*(quantity);
	char a[30]="Bervareges             ";
 	if(c.order[choice-1].flag==1)
	{
	    c.order[choice-1].quantity=c.order[choice-1].quantity+quantity;
	    c.order[choice-1].cost=c.order[choice-1].cost+50*quantity;
	}
	else
	{
	    strcpy(c.order[choice-1].item_name,a);
	    c.order[choice-1].quantity=quantity;
	    c.order[choice-1].cost=50*quantity;
	    c.order[choice-1].flag=1;
	}
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    vegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}
    }
    else if(choice==15)
    {
	printf("Quantity :");
	scanf("%d",&quantity);
	total=total + 200*(quantity);
	char a[30]="South Indian Thaali   ";
 	if(c.order[choice-1].flag==1)
	{
	    c.order[choice-1].quantity=c.order[choice-1].quantity+quantity;
	    c.order[choice-1].cost=c.order[choice-1].cost+200*quantity;
	}
	else
	{
	    strcpy(c.order[choice-1].item_name,a);
	    c.order[choice-1].quantity=quantity;
	    c.order[choice-1].cost=200*quantity;
	    c.order[choice-1].flag=1;
	}
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    vegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}
    }
    else if(choice==16)
    {
	printf("Quantity :");
	scanf("%d",&quantity);
	total=total + 250*(quantity);
	char a[30]="North Indian Thaali   ";
 	if(c.order[choice-1].flag==1)
	{
	    c.order[choice-1].quantity=c.order[choice-1].quantity+quantity;
	    c.order[choice-1].cost=c.order[choice-1].cost+250*quantity;
	}
	else
	{
	    strcpy(c.order[choice-1].item_name,a);
	    c.order[choice-1].quantity=quantity;
	    c.order[choice-1].cost=250*quantity;
	    c.order[choice-1].flag=1;
	}
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    vegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}

    }
    else if(choice==17)
    {
	system("clear");
	customer();
    }
    else
    {
	printf("Wrong Input! Re-enter THe Correct Option\n\n");
	if(getchar())
	    vegetarian();
    }
}






//-------------------------------------------------------------------------------------------------




//written by A.Arun

void nonvegetarian(void)
{ 


    int  choice;
    int again;
    int quantity;
    double price=0;
    char n;
    FILE *nmenu;
    printf("\n\n");
    system("clear");
    nmenu = fopen("nonvegmenu.txt","rt");
    while((n=getc(nmenu))!=EOF)
    {
	printf("%c",n);
    }
    printf("\n\nEnter What You Want :");
    printf("\n\n");
    scanf("%d",&choice);
//    initialize();

    if(choice==1)
    {
	printf("Quantity :");
	scanf("%d",&quantity);
	total=total + 220*(quantity);
	char a[30]="Chilli  Chicken       ";
 	if(c.order[choice+15].flag==1)
	{
	    c.order[choice+15].quantity=c.order[choice+15].quantity+quantity;
	    c.order[choice+15].cost=c.order[choice+15].cost+220*quantity;
	}
	else
	{
	    strcpy(c.order[choice+15].item_name,a);
	    c.order[choice+15].quantity=quantity;
	    c.order[choice+15].cost=220*quantity;
	    c.order[choice+15].flag=1;
	}
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    nonvegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}

    }

    else if(choice==2)
    {
	printf("Quantity :  ");
	scanf("%d",&quantity);
	total=total + 250*(quantity);
	char a[30]="Chicken  Lolipop      ";
 	if(c.order[choice+15].flag==1)
	{
	    c.order[choice+15].quantity=c.order[choice+15].quantity+quantity;
	    c.order[choice+15].cost=c.order[choice+15].cost+250*quantity;
	}
	else
	{
	    strcpy(c.order[choice+15].item_name,a);
	    c.order[choice+15].quantity=quantity;
	    c.order[choice+15].cost=250*quantity;
	    c.order[choice+15].flag=1;
	}
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");

	scanf("%d",&again);
	printf("\n");
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    nonvegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}
    }
    else if(choice==3)
    {
	printf("Quantity :");
	scanf("%d",&quantity);
	total=total + 180*(quantity);
	char a[30]="Chicken  Munchurian   ";
 	if(c.order[choice+15].flag==1)
	{
	    c.order[choice+15].quantity=c.order[choice+15].quantity+quantity;
	    c.order[choice+15].cost=c.order[choice+15].cost+180*quantity;
	}
	else
	{
	    strcpy(c.order[choice+15].item_name,a);
	    c.order[choice+15].quantity=quantity;
	    c.order[choice+15].cost=180*quantity;
	    c.order[choice+15].flag=1;
	}
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    nonvegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}
    }
    else if(choice==4)
    {
	printf("Quantity :  ");
	scanf("%d",&quantity);
	total=total + 50*(quantity);
	char a[30]="Omlet                 ";
  	if(c.order[choice+15].flag==1)
	{
	    c.order[choice+15].quantity=c.order[choice+15].quantity+quantity;
	    c.order[choice+15].cost=c.order[choice+15].cost+50*quantity;
	}
	else
	{
	    strcpy(c.order[choice+15].item_name,a);
	    c.order[choice+15].quantity=quantity;
	    c.order[choice+15].cost=50*quantity;
	    c.order[choice+15].flag=1;
	}
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    nonvegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}
    }
    else if(choice==5)
    {
	printf("Quantity :");
	scanf("%d",&quantity);
	total=total + 150*(quantity);
	char a[30]="Egg  Fried  Rice      ";
  	if(c.order[choice+15].flag==1)
	{
	    c.order[choice+15].quantity=c.order[choice+15].quantity+quantity;
	    c.order[choice+15].cost=c.order[choice+15].cost+150*quantity;
	}
	else
	{
	    strcpy(c.order[choice+15].item_name,a);
	    c.order[choice+15].quantity=quantity;
	    c.order[choice+15].cost=150*quantity;
	    c.order[choice+15].flag=1;
	}
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    nonvegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}
    }
    else if(choice==6)
    {
	printf("Quantity :");
	scanf("%d",&quantity);
	total=total + 200*(quantity);
	char a[30]="Chicken  Fried  Rice  ";
  	if(c.order[choice+15].flag==1)
	{
	    c.order[choice+15].quantity=c.order[choice+15].quantity+quantity;
	    c.order[choice+15].cost=c.order[choice+15].cost+200*quantity;
	}
	else
	{
	    strcpy(c.order[choice+15].item_name,a);
	    c.order[choice+15].quantity=quantity;
	    c.order[choice+15].cost=200*quantity;
	    c.order[choice+15].flag=1;
	}
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    nonvegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}

    }


    if(choice==7)
    {
	printf("Quantity :");
	scanf("%d",&quantity);
	total=total + 350*(quantity);
	char a[30]="Prawns  Biriyani      ";
  	if(c.order[choice+15].flag==1)
	{
	    c.order[choice+15].quantity=c.order[choice+15].quantity+quantity;
	    c.order[choice+15].cost=c.order[choice+15].cost+350*quantity;
	}
	else
	{
	    strcpy(c.order[choice+15].item_name,a);
	    c.order[choice+15].quantity=quantity;
	    c.order[choice+15].cost=350*quantity;
	    c.order[choice+15].flag=1;
	}
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    nonvegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}

    }

    else if(choice==8)
    {
	printf("Quantity :  ");
	scanf("%d",&quantity);
	total=total + 450*(quantity);
	char a[30]="Chicken Moghalai Biriyani";
 	if(c.order[choice+15].flag==1)
	{
	    c.order[choice+15].quantity=c.order[choice+15].quantity+quantity;
	    c.order[choice+15].cost=c.order[choice+15].cost+450*quantity;
	}
	else
	{
	    strcpy(c.order[choice+15].item_name,a);
	    c.order[choice+15].quantity=quantity;
	    c.order[choice+15].cost=450*quantity;
	    c.order[choice+15].flag=1;
	}
	printf("\n");
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	printf("\n");
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    nonvegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}
    }
    else if(choice==9)
    {
	printf("Quantity :");
	scanf("%d",&quantity);
	total=total + 500*(quantity);
	char a[30]="Mixed Moghalai Biriyani";
 	if(c.order[choice+15].flag==1)
	{
	    c.order[choice+15].quantity=c.order[choice+15].quantity+quantity;
	    c.order[choice+15].cost=c.order[choice+15].cost+500*quantity;
	}
	else
	{
	    strcpy(c.order[choice+15].item_name,a);
	    c.order[choice+15].quantity=quantity;
	    c.order[choice+15].cost=500*quantity;
	    c.order[choice+15].flag=1;
	}
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    nonvegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}
    }
    else if(choice==10)
    {
	printf("Quantity :  ");
	scanf("%d",&quantity);
	total=total + 400*(quantity);
	char a[30]="Fish  Biriyani        ";
  	if(c.order[choice+15].flag==1)
	{
	    c.order[choice+15].quantity=c.order[choice+15].quantity+quantity;
	    c.order[choice+15].cost=c.order[choice+15].cost+400*quantity;
	}
	else
	{
	    strcpy(c.order[choice+15].item_name,a);
	    c.order[choice+15].quantity=quantity;
	    c.order[choice+15].cost=400*quantity;
	    c.order[choice+15].flag=1;
	}       
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    nonvegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}
    }
    else if(choice==11)
    {
	printf("Quantity :");
	scanf("%d",&quantity);
	total=total + 150*(quantity);
	char a[30]="Dry  Chicken          ";
  	if(c.order[choice+15].flag==1)
	{
	    c.order[choice+15].quantity=c.order[choice+15].quantity+quantity;
	    c.order[choice+15].cost=c.order[choice+15].cost+150*quantity;
	}
	else
	{
	    strcpy(c.order[choice+15].item_name,a);
	    c.order[choice+15].quantity=quantity;
	    c.order[choice+15].cost=150*quantity;
	    c.order[choice+15].flag=1;
	}
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    nonvegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}
    }
    else if(choice==12)
    {
	printf("Quantity :");
	scanf("%d",&quantity);
	total=total + 200*(quantity);
	char a[30]="Gravy  Chicken        ";
  	if(c.order[choice+15].flag==1)
	{
	    c.order[choice+15].quantity=c.order[choice+15].quantity+quantity;
	    c.order[choice+15].cost=c.order[choice+15].cost+200*quantity;
	}
	else
	{
	    strcpy(c.order[choice+15].item_name,a);
	    c.order[choice+15].quantity=quantity;
	    c.order[choice+15].cost=200*quantity;
	    c.order[choice+15].flag=1;
	}
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    nonvegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}

    }
    else if(choice==13)
    {
	printf("Quantity :");
	scanf("%d",&quantity);
	total=total + 110*(quantity);
	char a[30]="Chicken  Biriyani     ";
  	if(c.order[choice+15].flag==1)
	{
	    c.order[choice+15].quantity=c.order[choice+15].quantity+quantity;
	    c.order[choice+15].cost=c.order[choice+15].cost+110*quantity;
	}
	else
	{
	    strcpy(c.order[choice+15].item_name,a);
	    c.order[choice+15].quantity=quantity;
	    c.order[choice+15].cost=110*quantity;
	    c.order[choice+15].flag=1;
	}
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    nonvegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}

    }
    else if(choice==14)
    {
	printf("Quantity :  ");
	scanf("%d",&quantity);
	total=total + 50*(quantity);
	char a[30]="Beverages             ";
 	if(c.order[choice+15].flag==1)
	{
	    c.order[choice+15].quantity=c.order[choice+15].quantity+quantity;
	    c.order[choice+15].cost=c.order[choice+15].cost+50*quantity;
	}
	else
	{
	    strcpy(c.order[choice+15].item_name,a);
	    c.order[choice+15].quantity=quantity;
	    c.order[choice+15].cost=50*quantity;
	    c.order[choice+15].flag=1;
	}
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	printf("\n");
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    nonvegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}
    }
    else if(choice==15)
    {
	printf("Quantity :");
	scanf("%d",&quantity);
	total=total + 100*(quantity);
	char a[30]="Ice Cream             ";
 	if(c.order[choice+15].flag==1)
	{
	    c.order[choice+15].quantity=c.order[choice+15].quantity+quantity;
	    c.order[choice+15].cost=c.order[choice+15].cost+100*quantity;
	}
	else
	{
	    strcpy(c.order[choice+15].item_name,a);
	    c.order[choice+15].quantity=quantity;
	    c.order[choice+15].cost=100*quantity;
	    c.order[choice+15].flag=1;
	} 
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    nonvegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}
    }
    else if(choice==16)
    {
	printf("Quantity :  ");
	scanf("%d",&quantity);
	total=total + 350*(quantity);
	char a[30]="Indian  Thaali        ";
 	if(c.order[choice+15].flag==1)
	{
	    c.order[choice+15].quantity=c.order[choice+15].quantity+quantity;
	    c.order[choice+15].cost=c.order[choice+15].cost+350*quantity;
	}
	else
	{
	    strcpy(c.order[choice+15].item_name,a);
	    c.order[choice+15].quantity=quantity;
	    c.order[choice+15].cost=350*quantity;
	    c.order[choice+15].flag=1;
	}
	printf("Press 1 To Order Again :\nPress 2 To Get Your Total:\n\nEnter Your Choice :");
	scanf("%d",&again);
	if(again==1)
	{
	    printf("\n\n");
	    system("clear");
	    nonvegetarian();
	}
	else if(again==2)
	{
	    printf("Your Total Amount Is : Rs. %.2lf\n\n",total);
	    details(total);
	}
    }
    else if(choice==17)
    {
	system("clear");
	customer();
    }
    else
    {
	printf("Wrong Input! Re-enter THe Correct Option\n\n");
	nonvegetarian();
    }
}





//-------------------------------------------------------------------------------------------------






//written by sandeep.s.s
void details(double tf)
{
    cust=c;
    char temp[32];
    total=0;
    initialize();
    system("clear");
    id++;
    time_t T= time(NULL);
    struct  tm *t = localtime(&T);
    printf("Please Give Your Contact Details \n");
    printf(" First Name : ");
    scanf("%s",cust.name);
    printf(" Last Name  : ");
    scanf("%s",cust.name2);
    printf(" Phone      : ");
    scanf("%lld",&cust.ph);
    printf(" Address    : ");
    scanf("%s",cust.address);
    printf(" Landmark   : ");
    scanf("%s",cust.landmark);
    printf("\n\n");
    cust.id=id+t->tm_hour+t->tm_min+t->tm_sec;
    //cust.id=getid(cust.id);
    cust.total=tf;
    cust.dd=t->tm_mday;
    cust.mm=t->tm_mon+1;
    cust.yyyy=t->tm_year+1900;
    cust.h=t->tm_hour;
    cust.m=t->tm_min;
    cust.s=t->tm_sec;
    printf("PLEASE NOTE DOWN YOUR ORDER ID ...\n\n	");
    printf("YOUR ORDER ID IS : \t\t  %d \t\t\n\n ",cust.id);
    printf(" Your Entered Details Are --->\n");

    printf("    -->Total       :  %lf\n\n    -->First Name  :  %s\n\n    -->Last Name   :  %s\n\n    -->Phone       :  %lld\n\n    -->Address     :  %s\n\n    -->Landmark    :  %s\n\n",cust.total,cust.name,cust.name2,cust.ph,cust.address,cust.landmark);
    //printf("Date is: %d/%d/%d\n",t->tm_mday, t->tm_mon+1, t->tm_year+1900);
    //printf("Time is: %d:%d:%d\n",t->tm_hour, t->tm_min, t->tm_sec);
    printf("\n\n\n");
    printf("                       *********************************************************************************************\n");
    printf("                                             Your Order Will Be At Your Door In 30 minutes.\n");
    printf("                                                       .....HAPPY ORDERING.....\n");
    printf("                       *********************************************************************************************\n");

    FILE *fcust;
    fcust = fopen("order.txt","a");
    fwrite(&cust,sizeof(cust),1,fcust);
    fclose(fcust);
    printf("Press Any To The MainMenu.");
    getchar();
    if(getchar())
	customer();
}




//-------------------------------------------------------------------------------------------------







//written by A.Arun
void deleteorder(void)
{
    int d;
    char another='y';
    char findrecord;
    char choice;
    while(another=='y')
    {
	findrecord='n';
	system("clear");
	printf("                Enter The Customer ID To Delete :");
	scanf("%d",&d);
	getchar();
	temp1=fopen("order.txt","r");
	rewind(temp1);
	while(fread(&c,sizeof(c),1,temp1)==1)
	{
	    if(c.id==d)
	    {
		printf("\n\n");
		printf("                               .....................The Order Is Available....................\n\n");
		printf("               Customer Name Is %s\n\n",c.name);
		printf("               Customer's Date  OF Order Is %d/%d/%d\n\n",c.dd,c.mm,c.yyyy);
		findrecord='t';
		break;
	    }
	}
	if(findrecord!='t')
	{
	    printf("                                    .........................NO ORDER IS FOUND PLEASE MODIFY THE SEARCH..........................\n\n");
	    printf("Do You Want To Delete Another  Record ? (y/n) ");
	    scanf("%c",&another);
	}
	if(findrecord=='t')
	{
	    printf("Do You Want To Cancle The Order ? (y/n) ");
	    scanf("%c",&choice);
	    if(choice=='n')
	    {
		printf("Do You Want To Delete Another  Record ? (y/n) ");
		getchar();
		scanf("%c",&another);
	    }
	    if(choice=='y')
	    {
		temp2=fopen("test.txt","w");
		rewind(temp1);
		rewind(temp2);
		while(fread(&c,sizeof(c),1,temp1)==1)
		{
		    if(c.id!=d)
		    {
			fwrite(&c,sizeof(c),1,temp2);
		    }
		}
		fclose(temp1);
		fclose(temp2);
		remove("order.txt");
		rename("test.txt","order.txt");
		temp1=fopen("order.txt","a");
		printf("        ................THE RECORD IS SUCCESSFULLY DELETED.............\n\n");
		printf("        Delete Another Record ? (y/n) : ");
		getchar();
		scanf("%c",&another);
		if(another!='n')
		    getchar();
	    }
	}
    }
    getchar();
    order();
}


//-------------------------------------------------------------------------------------------------


//written by sandeep.s.s
int viewdetails(void)
{
    int oid;
    struct customer ctemp;
    system("clear");
    printf("Please enter your order id:");
    scanf("%d",&oid);
    FILE *view;
    view=fopen("order.txt","r");
    if(view==NULL)
    {
	printf("\t\t\t..................NO ORDERS ENTERED....................\n");
	printf("\t press ENTER to go back ...");
	getchar();
	getchar();
    }
    else
    {
	char viw;
	while(fread(&ctemp,sizeof(ctemp),1,view)==1)
	{
	    if(ctemp.id==oid)
	    {

		printf("                       ======================================================================================                 \n");
		printf("                       ||           ********************** Order  Details**********************            ||                 \n");
		printf("                       ======================================================================================                 \n");
		printf("\n\n\n");
		printf(" YOUR ORDERS ARE...-->\n\n\n");
		printf("=======================================================================================================================================================================\n");
		printf("| NAME          :  %s %s \t\t\t\t\t\t\t\t\t\t\t\t\t",ctemp.name,ctemp.name2);
		printf("| ORDER ID      :  %d    \n",ctemp.id);
		printf("| ADDRESS       :  %s    \t\t\t\t\t\t\t\t\t\t\t\t\t",ctemp.address);
		printf("| LANDMARK      :  %s    \n",ctemp.landmark);
		printf("| PHONE NUMBER  :  %lld  \n",ctemp.ph);
		printf("| TIME          :  %d:%d:%d \t\t\t\t\t\t\t\t\t\t\t\t\t",ctemp.h,ctemp.m,ctemp.s);
		printf("| DATE          :  %d/%d/%d \n\n\n",ctemp.dd,ctemp.mm,ctemp.yyyy);
		printf("| Items\t\t\t\t\t\t\t\tQuantity\t\t\t\tCost\n");
		for(int j=0;j<32;j++)
		{
		    if(ctemp.order[j].flag==1)
			printf("| %s \t\t\t\t\t X%d \t\t\t\t\t %f \t\n",ctemp.order[j].item_name,ctemp.order[j].quantity,ctemp.order[j].cost);
		}
		printf("\n\n| TOTAL                                                                                                 :  %lf \n",ctemp.total);
		printf("=======================================================================================================================================================================\n");
		printf("\n\n\n");
		printf("\n\n\n...press ENTER to continue...\n");
		getchar();
		getchar();
		return 1;
	    }
	}
    }
    fclose(view);
    return 0;
}


//-------------------------------------------------------------------------------------------------

