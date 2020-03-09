/*
                                   THIS PROGRAMME IS A MINI PROJECT AND AIMS TO FULLFILL THE REQUIREMENT OF HOTEL AND FOOD ORDER MANAGEMENT
                                  CREATED BY: SANDEEP.S.S (REG NO 173210)
	 	       			      A.J.V.M.ARUN (REG NO 173217)
                                  DATE:20/1/2020
*/
#include"header.h"
struct employee e,me;
struct customer cust;
FILE *fp,*ft,*dp,*dt,*fc;
int s;
int again;
int quantity;
int t;






//-------------------------------------------------------------------------------------------------

int Password()
{
    char password[15]="maharshi...";
    char passw[15];
    system("clear");
    printf("PLEASE ENTER THE PASSWORD");
    scanf("%s",passw);
    if(strcmp(password,passw)==0)
    {
	printf("PASSWORD MATCHED...!");
	return 1;
    }
    else
    {
	printf("OOPS... WRONG PASSWORD");
	Password();
    }
}




//-------------------------------------------------------------------------------------------------







void addrecord(void)
{
    system("clear");
    fp=fopen("record.txt","a");
    if(getdata()==1)
    {
	fseek(fp,0,SEEK_END);
	fwrite(&e,sizeof(e),1,fp);
	fclose(fp);
	printf("\n\n");
	printf("The Record Is Successfully Saved ! !\n\n");
	printf("Save any more? (y/n): ");
	getchar();
	if(getchar()=='n')
	{
	    getchar();
	    administration();
	}
	else
	    system("clear");
	addrecord();
    }
    else
    {
	printf("Save any other record? (y/n): ");
	if(getchar()=='n')
	{
	    getchar();
	    administration();
	}
	else
	    system("clear");
	addrecord();
    }
}



//-------------------------------------------------------------------------------------------------



int checkid(int c)  //check whether the record is exist in list or not
{
    dp=fopen("record.txt","r");
    rewind(dp);
    while(fread(&e,sizeof(e),1,dp)==1)
    {
	if(e.id==c)
	{
	    fclose(dp);
	    return 0;  //returns 0 if employee exits
	}
    }
    fclose(dp);
    return 1; //return 1 if it not
}


//-------------------------------------------------------------------------------------------------



int getdata()
{
    printf("        Employee ID                     :\t");
    scanf("%d",&t);
    if(checkid(t)==0)
    {
	system("clear");
	printf("\n\n");
	printf("            ..... The Employee Record Already Exists !!!.....\n");
	getchar();
	return 0;
    }
    else
    {
	e.id=t;
	printf("        Employee Name                   :\t");
	scanf("%s",e.name);
	printf("        Date Of Birth (dd/mm/yyyy)      :\t");
	scanf("%d/%d/%d",&e.dd,&e.mm,&e.yyyy);
	printf("        Year OF Joining                 :\t");
	scanf("%d",&e.YOJ);
	getchar();
	printf("        Department                      :\t");
	scanf("%s",e.department);
	printf("        Salary                          :\t");
	scanf("%f",&e.salary);
	return 1;
    }
}


//-------------------------------------------------------------------------------------------------










void deleterecord(void)
{
    int d;
    char another='y';
    char findrecord;
    char choice;
    while(another=='y')  
    {
	findrecord='n';
	system("clear");
	printf("                Enter The Employee ID To Delete :");
	scanf("%d",&d);
	getchar();
	fp=fopen("record.txt","a+");
	rewind(fp);
	while(fread(&e,sizeof(e),1,fp)==1)
	{
	    if(e.id==d)
	    {
		printf("\n\n");
		printf("...........................The Record is available............................\n\n\n");
		printf("       ID               :  %d\n\n",e.id);
		printf("       Name             :  %s\n\n",e.name);
		printf("       Date OF Birth    :  %d/%d/%d\n\n",e.dd,e.mm,e.yyyy);
		printf("       Year Of Joining  :  %d\n\n",e.YOJ);
		printf("       Department       :  %s\n\n",e.department);
		printf("       Salary           :  %f\n\n",e.salary);
		findrecord='t';
		break;
	    }
	}
	if(findrecord!='t')
	{
	    printf("                                    .........................NO RECORD IS FOUND PLEASE MODIFY THE SEARCH..........................\n\n");
	    printf("Do You Want To Delete Another  Record ? (y/n) ");
	    scanf("%c",&another);
	}
	if(findrecord=='t')
	{
	    printf("Do You Want To Delete THe Record ? (y/n) ");
	    scanf("%c",&choice);
	    if(choice=='n')
	    {
		printf("Do You Want To Delete Another  Record ? (y/n) ");
		getchar();
		scanf("%c",&another);
	    }
	    if(choice=='y')
	    {
		ft=fopen("test1.txt","w");  
		rewind(fp);
		rewind(ft);
		while(fread(&e,sizeof(e),1,fp)==1)
		{
		    if(e.id!=d)
		    {
			fwrite(&e,sizeof(e),1,ft);
		    }                             
		}
		fclose(ft);
		fclose(fp);
		remove("record.txt");
		rename("test1.txt","record.txt"); 
		fp=fopen("record.txt","r");    
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
    administration();
}



//-------------------------------------------------------------------------------------------------








void searchrecord(void)
{
    system("clear");
    int d;
    char findrecord;
    printf("                                          *****************************Search Employees Record*********************************\n\n");
    printf("                  1. Search By ID\n");
    printf("                  2. Search By Name\n\n");
    printf("                  Enter Your Choice--->");
    getchar();
    fp=fopen("record.txt","r"); 
    rewind(fp);  
    switch(getchar())
    {
	case '1':
	    {
		system("clear");
		printf("                                   **************Search Record By Id****************\n\n");
		printf("                Enter The Employee ID : ");
		scanf(" %d",&d);
		printf("\n\n");
		printf("Searching........");
		while(fread(&e,sizeof(e),1,fp)==1)
		{
		    if(e.id==d)
		    {
			printf("\n\n");
			printf("...........................The Record is available............................\n\n\n");
			printf("       ID               :  %d\n\n",e.id);
			printf("       Name             :  %s\n\n",e.name);
			printf("       Date OF Birth    :  %d/%d/%d\n\n",e.dd,e.mm,e.yyyy);
			printf("       Year Of Joining  :  %d\n\n",e.YOJ);
			printf("       Department       :  %s\n\n",e.department);
			printf("       Salary           :  %f\n\n",e.salary);
			findrecord='t';
		    }

		}
		if(findrecord!='t')  //checks whether conditiion enters inside loop or not
		{
		    printf("\aNo Record Found\a");
		}
		getchar();
		printf("Try Another Search ? (y/n)");
		if(getchar()=='y')
		    searchrecord();
		else
		{
		    getchar();
		    administration();
		}
		break;
	    }
	case '2':
	    {
		char s[15];
		system("clear");
		printf("                                   **********************Search Employees By Name***************************\n\n");
		printf("               Enter Employee Name : ");
		scanf(" %s",s);
		int d=0;
		while(fread(&e,sizeof(e),1,fp)==1)
		{
		    if(strcmp(e.name,(s))==0) //checks whether a.name is equal to s or not
		    {
			printf("                               .........................The Record is available...........................\n\n\n");
			printf("       ID               :  %d\n\n",e.id);
			printf("       Name             :  %s\n\n",e.name);
			printf("       Date OF Birth    :  %d/%d/%d\n\n",e.dd,e.mm,e.yyyy);
			printf("       Year Of Joining  :  %d\n\n",e.YOJ);
			printf("       Department       :  %s\n\n",e.department);
			printf("       Salary           :  %f\n\n",e.salary);
			d++;
		    }

		}
		if(d==0)
		{
		    printf("\aNo Record Found\a");
		}
		getchar();
		printf("Try Another Search ? (y/n)");
		if(getchar()=='y')
		    searchrecord();
		else
		{
		    getchar();
		    administration();
		}
		break;
	    }
	default :
	    getchar();
	    searchrecord();
    }
    fclose(fp);
}

//-------------------------------------------------------------------------------------------------


void viewrecord(void)
{
    system("clear");
    fp=fopen("record.txt","r");
    printf("                       ======================================================================================                 \n");
    printf("                       ||          ********************** Employee Details**********************           ||                 \n");
    printf("                       ======================================================================================                 \n");
    printf("\n\n\n");

    while(fread(&e,sizeof(e),1,fp)==1)
    {
	printf("===============================================\n");
	printf("| DEPARTMENT :  %s \n",e.department);
	printf("| ID         :  %d \n",e.id);
	printf("| NAME       :  %s \n",e.name);
	printf("| D.O.B      :  %d/%d/%d \n",e.dd,e.mm,e.yyyy);
	printf("| Y.O.J      :  %d \n",e.YOJ);
	printf("| Salary     :  %f \n",e.salary);
	printf("===============================================\n");
	printf("\n\n\n");
    }

    fclose(fp);
    returnfunc();
}



//-------------------------------------------------------------------------------------------------


void returnfunc(void)
{
    {
	getchar();
	printf(" Press ENTER to return to main menu");
    }
e:
    if(getchar()=='\n') //allow only use of enter
	administration();
    else
	goto e;
}



//-------------------------------------------------------------------------------------------------






void orderstoday(void)
{
    system("clear");
    fc=fopen("order.txt","r");
    printf("                       ======================================================================================                 \n");
    printf("                       ||           ********************** Order Details **********************            ||                 \n");
    printf("                       ======================================================================================                 \n");
    printf("\n\n\n");

    while(fread(&cust,sizeof(cust),1,fc)==1)
    {
	printf("===============================================\n");
	printf("| ORDER ID         :  %d \n",cust.id);
	printf("| NAME             :  %s \n",cust.name);
	printf("| TOTAL            :  %lf \n",cust.bill);
	printf("| TIME             :  %d:%d:%d\n",cust.h,cust.m,cust.s);
	printf("| DATE OF ORDER    :  %d/%d/%d \n",cust.dd,cust.mm,cust.yyyy);
	printf("| ADDRESS          :  %s \n",cust.address);
	printf("| LANDMARK         :  %s \n",cust.landmark);
	printf("===============================================\n");
	printf("\n\n\n");

    }

    fclose(fc);
    returnfunc();
}





//-------------------------------------------------------------------------------------------------



int getmdata(void)
{
    char choice;
    int t;
    printf("  ENTER YOUR CHOICE:");
    printf(" \n 1.ID\n 2.NAME\n 3.DEPARTMENT \n 4.D.O.B \n 5.Y.O.J\n 6.SALARY \n");
    getchar();
    scanf("%c",&choice);
    switch(choice)
    {
	case '1':
	    printf(" ENTER THE NEW  ");
	    printf("        ID                             : ");
	    scanf("%d",&me.id);
	    break;
	case '2':
	    printf(" ENTER THE NEW  ");
	    printf("        Employee Name                   : ");
	    scanf("%s",me.name);
	    break;
	case '4':
	    printf(" ENTER THE NEW  ");
	    printf("        Date Of Birth (dd/mm/yyyy)      : ");
	    scanf("%d/%d/%d",&me.dd,&me.mm,&me.yyyy);
	    break;
	case '5':
	    printf(" ENTER THE NEW  ");
	    printf("        Year OF Joining                 : ");
	    scanf("%d",&me.YOJ);
	    getchar();
	    break;
	case '3':
	    printf(" ENTER THE NEW  ");
	    printf("        Department                      : ");
	    scanf("%s",me.department);
	    break;
	case '6':
	    printf(" ENTER THE NEW  ");
	    printf("        Salary                          : ");
	    scanf("%f",&me.salary);
	    break;
	default:
	    printf("  PLEASE ENTER THE CORRECT INPUT!...");    
	    break;
    }
    return 1;
}




//-------------------------------------------------------------------------------------------------


void modifyrecord(void)
{
    int d;
    char another='y';
    char findrecord;
    char choice;
    while(another=='y')  
    {
	findrecord='n';
	system("clear");
	printf("                Enter The Employee ID To Modify :");
	scanf("%d",&d);
	getchar();
	fp=fopen("record.txt","a+");
	rewind(fp);
	while(fread(&e,sizeof(e),1,fp)==1)
	{
	    if(e.id==d)
	    {
		me=e;
		printf("\n\n");
		printf("...........................The Record is available............................\n\n\n");
		printf("       ID               :  %d\n\n",e.id);
		printf("       Name             :  %s\n\n",e.name);
		printf("       Date OF Birth    :  %d/%d/%d\n\n",e.dd,e.mm,e.yyyy);
		printf("       Year Of Joining  :  %d\n\n",e.YOJ);
		printf("       Department       :  %s\n\n",e.department);
		printf("       Salary           :  %f\n\n",e.salary);
		findrecord='t';
		break;
	    }
	}
	if(findrecord!='t')
	{
	    printf("                                    .........................NO RECORD IS FOUND PLEASE MODIFY THE SEARCH..........................\n\n");
	    printf("Do You Want To Modify Another  Record ? (y/n) ");
	    scanf("%c",&another);
	}
	if(findrecord=='t')
	{
	    printf("Do You Want To Modify THe Record ? (y/n) ");
	    scanf("%c",&choice);
	    if(choice=='n')
	    {
		printf("Do You Want To Modify Another  Record ? (y/n) ");
		getchar();
		scanf("%c",&another);
	    }
	    if(choice=='y')
	    {
		ft=fopen("test1.txt","w");  
		rewind(fp);
		rewind(ft);
		while(fread(&e,sizeof(e),1,fp)==1)
		{
		    if(e.id!=d)
		    {
			fwrite(&e,sizeof(e),1,ft);
		    }                             
		}
		fclose(ft);
		fclose(fp);
		remove("record.txt");
		rename("test1.txt","record.txt"); 
		fp=fopen("record.txt","a");
		if(getmdata()==1)
		{
		    fseek(fp,0,SEEK_END);
		    fwrite(&me,sizeof(me),1,fp);
		    fclose(fp);
		    printf("\n\n");
		    printf("The Record Is Successfully Modified ! !\n\n");
		    printf("Modify any more? (y/n): ");
		    getchar();
		    if(getchar()=='n')
		    {
			getchar();
			printf("\n\n");
			administration();
		    }
		    else
			system("clear");
		    modifyrecord();
		}
		else
		{
		    printf("Modify any other record? (y/n): ");
		    if(getchar()=='n')
		    {
			getchar();
			administration();
		    }
		    else
			system("clear");
		    modifyrecord();
		}
	    }
	}
    }
    getchar();
    administration();
}



