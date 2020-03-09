//headerfile
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
struct employee
{
    char name[30];
    int id;
    int dd; int mm; int yyyy;
    int YOJ;
    float salary;
    char department[20];
    int quantity;
};

typedef struct node
{
    char *i;
    int q;
    int cost;
    struct node*next;
}node;


struct customer
{
    int id;
    struct node *head;
    char name[30];
    char name2[30];
    long long int ph;
    int dd; int mm; int yyyy;
    int s; int m; int h;
    double bill;
    char address[40];
    char landmark[40];
    node*items;
};

void returnfunc(void);
void modifyrecord(void);
void administration(void);
void customer(void);
void addrecord(void);
void deleterecord(void);
void searchrecord(void);
void viewrecord(void);
void viewdetails(void);
void vegetarian(void);
void order(void);
void nonvegetarian(void);
void orderstoday(void);
void details(double);
void aboutus(void);
int Password(void);
int getdata();
int checkid(int);
int getid(void);
int getmdata(void);
void deleteorder(void);
void display(node* head);
node* create_node(char *i,int q,int c);
node* insert_at_begin(node* head,char *i,int q, int c);
