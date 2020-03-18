//headerfile
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<termios.h>
struct employee
{
    char name[30];
    int id;
    int dd; int mm; int yyyy;
    int YOJ;
    float salary;
    char department[20];
};

typedef struct item
{
    char item_name[30];
    int quantity;
    float cost;
    int flag;
}item;

struct customer
{
    int id;
    char name[30];
    char name2[30];
    long long int ph;
    int dd; int mm; int yyyy;
    int s; int m; int h;
    double total;
    char address[40];
    char landmark[40];
    int num;
    item order[32];
};

int getid(int id);
void initialize(void);
void returnfunc(void);
void modifyrecord(void);
void administration(void);
void customer(void);
void addrecord(void);
void deleterecord(void);
void searchrecord(void);
void viewrecord(void);
int viewdetails(void);
void vegetarian(void);
void order(void);
void nonvegetarian(void);
void orderstoday(void);
void details(double);
void aboutus(void);
int Password(char*);
int getdata();
int checkid(int);
int getmdata(void);
void deleteorder(void);
ssize_t getpasswd (char** , size_t, int , FILE* );
