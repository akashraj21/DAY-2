#include<stdio.h>
#include<string.h>
#define Len 20
void getinputs();
void display();

void(*p)();

struct employee
{
    char Name[Len];
    int Id;
};

struct joining
{
    int Date;
    int Month;
    int Year;
    struct employee empo;
};
struct joining join;
void main()
{
    p = getinputs;
    p();
    
}

void getinputs()
{
    printf("Enter name of the employee:");
    scanf("%s",join.empo.Name);
    printf("\nEnter the employee id:");
    scanf("%d",&join.empo.Id);
    printf("Enter the date of Joining:");
    scanf("%d",&join.Date);
    printf("Enter The Month of joining:");
    scanf("%d",&join.Month);
    printf("Enter The year of joining:");
    scanf("%d",&join.Year);
    p = display;
    p();
}

void display()
{
    printf("Name: %s\nEmployee id: %d\n",join.empo.Name,join.empo.Id);
    printf("Date of Joining: %d/%d/%d\n",join.Date,join.Month,join.Year);
}
