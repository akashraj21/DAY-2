#include<stdio.h>
#define formulae 0.0833

void getinputs();
void calculate();
void display(float inches,float feets);

void (*p)();
struct inch
{
    float inch_1;
    float inch_2;
};
struct inch i;

void main()
{
    p = getinputs;
    p();
}

void getinputs()
{
    printf("Enter the inch 1:");
    scanf("%f",&i.inch_1);
    printf("Enter the inch 2:");
    scanf("%f",&i.inch_2);
    calculate();
}

void calculate()
{
    float inches,feets;
    inches = i.inch_1 + i.inch_2;
    feets = formulae * inches;
    display(inches,feets);
}

void display(float inches,float feets)
{
    printf("\nThe Total Distance  in Inches:%.2f",inches);
    
    printf("\nThe Total Distance in Feet:%.2f",feets);
}
