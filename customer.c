/*
			   THIS PROGRAMME IS A MINI PROJECT AND AIMS TO FULLFILL THE REQUIREMENT OF HOTEL AND FOOD ORDER MANAGEMENT
				   	CREATED BY: SANDEEP.S.S (REG NO 173210)
 				        	    A.J.V.M.ARUN (REG NO 173217)
				   	 DATE:20/1/2020
*/

#include"header.h"
int s;
char findrecord;
double total=0;
struct customer c;
int id=0;
node *o=NULL;
FILE *temp1,*temp2;


//-------------------------------------------------------------------------------------------------



node* create_node(char *i,int q,int c)
{
    node*temp;
    temp=(node*)malloc(sizeof(node));
    if(temp==NULL)
    {
	printf("...ERROR... :( ");
	exit(-1);
    }
    else
    {
	temp->i=i;
	temp->q=q;
	temp->cost=c;
	temp->next=NULL;
    }
    return temp;
}

//-------------------------------------------------------------------------------------------------




node* insert_at_begin(node* head,char *i,int q, int c)
{
    node*t;
    t=create_node(i,q,c);
    t->next=head;
    head=t;
    return head;
}


//-------------------------------------------------------------------------------------------------


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
	o=insert_at_begin(o,a,quantity,140);
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
	o=insert_at_begin(o,a,quantity,160);
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
	o=insert_at_begin(o,a,quantity,150);
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
	o=insert_at_begin(o,a,quantity,220);
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
	o=insert_at_begin(o,a,quantity,200);
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
	o=insert_at_begin(o,a,quantity,230);
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
	o=insert_at_begin(o,a,quantity,180);
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
	o=insert_at_begin(o,a,quantity,210);
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
	o=insert_at_begin(o,a,quantity,500);
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
	o=insert_at_begin(o,a,quantity,450);
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
	o=insert_at_begin(o,a,quantity,550);
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
	o=insert_at_begin(o,a,quantity,100);
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
    else if(choice==13)
    {
	printf("Quantity :");
	scanf("%d",&quantity);
	total=total + 120*(quantity);
	char a[30]="Ice  Cream            ";
	o=insert_at_begin(o,a,quantity,120);
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
	o=insert_at_begin(o,a,quantity,50);
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
	o=insert_at_begin(o,a,quantity,200);
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
	o=insert_at_begin(o,a,quantity,250);
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







void nonvegetarian(void)
{ 


    int choice;
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


    if(choice==1)
    {
	printf("Quantity :");
	scanf("%d",&quantity);
	total=total + 220*(quantity);
	char a[30]="Chilli  Chicken       ";
	o=insert_at_begin(o,a,quantity,220);
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
	o=insert_at_begin(o,a,quantity,250);
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
    else if(choice==3)
    {
	printf("Quantity :");
	scanf("%d",&quantity);
	total=total + 180*(quantity);
	char a[30]="Chicken  Munchurian   ";
	o=insert_at_begin(o,a,quantity,180);
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
	o=insert_at_begin(o,a,quantity,50);
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
	o=insert_at_begin(o,a,quantity,150);
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
	o=insert_at_begin(o,a,quantity,200);
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
	o=insert_at_begin(o,a,quantity,350);
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
	o=insert_at_begin(o,a,quantity,450);
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
	o=insert_at_begin(o,a,quantity,500);
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
	o=insert_at_begin(o,a,quantity,400);
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
	o=insert_at_begin(o,a,quantity,150);
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
	o=insert_at_begin(o,a,quantity,200);
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
	o=insert_at_begin(o,a,quantity,110);
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
	o=insert_at_begin(o,a,quantity,50);
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
    else if(choice==15)
    {
	printf("Quantity :");
	scanf("%d",&quantity);
	total=total + 100*(quantity);
	char a[30]="Ice Cream             ";
	o=insert_at_begin(o,a,quantity,100);
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
	o=insert_at_begin(o,a,quantity,350);
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



void display(node* head)
{
    node*t=head;
	    printf("| Items\t\t\t\t\t\t\tQuantity\t\t\t\t\tCost\n");
    while(t!=NULL)
    {
	printf("| %s\t\t\t\t\tX%d\t\t\t\t\t%d\t\n",t->i,t->q,t->cost*t->q);
	t=t->next;
    }
	    printf("| TOTAL                                                                                                :  %lf \n",c.bill);
	    printf("=======================================================================================================================================================================\n");
}


//-------------------------------------------------------------------------------------------------




void details(double tf)
{
    //  char status[10]="placed";
    system("clear");
    id++;
    time_t T= time(NULL);
    struct  tm *t = localtime(&T);
    printf("Please Give Your Contact Details \n");
    printf(" First Name : ");
    scanf("%s",c.name);
    printf(" Last Name  : ");
    scanf("%s",c.name2);
    printf(" Phone      : ");
    scanf("%lld",&c.ph);
    printf(" Address    : ");
    scanf("%s",c.address);
    printf(" Landmark   : ");
    scanf("%s",c.landmark);
    printf("\n\n");
    //    c.status=status;
    c.id=id+t->tm_hour+t->tm_min+t->tm_sec;
    c.bill=tf;
    c.dd=t->tm_mday;
    c.mm=t->tm_mon+1;
    c.yyyy=t->tm_year+1900;
    c.h=t->tm_hour;
    c.m=t->tm_min;
    c.s=t->tm_sec;
    c.items=o;
    printf("PLEASE NOTE DOWN YOUR ORDER ID ...\n\n	");
    printf("YOUR ORDER ID IS : \t\t  %d \t\t\n\n ",c.id);
    printf(" Your Entered Details Are --->\n");

    printf("    -->Total       :  %lf\n\n    -->First Name  :  %s\n\n    -->Last Name   :  %s\n\n    -->Phone       :  %lld\n\n    -->Address     :  %s\n\n    -->Landmark    :  %s\n\n",c.bill,c.name,c.name2,c.ph,c.address,c.landmark);
    //printf("Date is: %d/%d/%d\n",t->tm_mday, t->tm_mon+1, t->tm_year+1900);
    //printf("Time is: %d:%d:%d\n",t->tm_hour, t->tm_min, t->tm_sec);
    printf("\n\n\n");
    printf("                       *********************************************************************************************\n");
    printf("                                             Your Order Will Be At Your Door In 30 minutes.\n");
    printf("                                                       .....HAPPY ORDERING.....\n");
    printf("                       *********************************************************************************************\n");

    FILE *cust;
    cust = fopen("order.txt","a");
    fwrite(&c,sizeof(c),1,cust);
    fclose(cust);
    printf("Press Any To The MainMenu.");
    o=NULL;
    getchar();
    if(getchar())
	customer();
}





//-------------------------------------------------------------------------------------------------







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


void viewdetails(void)
{
    int oid;
    system("clear");
    printf("Please enter your order id:");
    scanf("%d",&oid);
    FILE *view;
    view=fopen("order.txt","r");
    char viw;
    while(fread(&c,sizeof(c),1,view)==1)
    {
	if(c.id==oid)
	{
	    printf("                       ======================================================================================                 \n");
	    printf("                       ||           ********************** Order  Details**********************            ||                 \n");
	    printf("                       ======================================================================================                 \n");
	    printf("\n\n\n");
	    printf(" YOUR ORDERS ARE...-->\n\n\n");
	    printf("=======================================================================================================================================================================\n");
	    printf("| NAME          :  %s %s \t\t\t\t\t\t\t\t\t\t\t\t\t",c.name,c.name2);
	    printf("| ORDER ID      :  %d    \n",c.id);
	    printf("| ADDRESS       :  %s    \t\t\t\t\t\t\t\t\t\t\t\t\t",c.address);
	    printf("| LANDMARK      :  %s    \n",c.landmark);
	    printf("| PHONE NUMBER  :  %lld  \n",c.ph);
	    printf("| TIME          :  %d:%d:%d \t\t\t\t\t\t\t\t\t\t\t\t\t",c.h,c.m,c.s);
	    printf("| DATE          :  %d/%d/%d \n",c.dd,c.mm,c.yyyy);
	    display(c.items);
	    printf("\n\n\n");
	    goto e;
	}
    }
	    printf("                       ======================================================================================                 \n");
    	    printf("                       ||                           ....NO RECORD FOUND....                                ||		  \n");
	    printf("                       ======================================================================================                 \n");
e:    fclose(view);
    getchar();
    printf("\n\n\n...press ENTER to continue...\n");
      getchar();
      order();
}



//-------------------------------------------------------------------------------------------------

