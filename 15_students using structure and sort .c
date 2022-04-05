#include<stdio.h>
#include<stdlib.h>
#define length 20

void GetInput();
void Display(int num);
void Sort(int num);

void (*p)();

struct Students{
    int roll;
    char name[length];
    float c;
    float Python;
    float DS;
    float Marks;
};

struct Students Arrays[length];
void main(){
    p=GetInput;
    p();
}

void GetInput(){
    int num;
    
    for(int i=0;i<num;i++){
        printf("\n Enter the details of student %d", i+1);
        printf("\n Enter the Register Number : ");
        scanf("%d", &Arrays[i].roll);
        printf("\n Enter the student name : ");
        scanf("%s", Arrays[i].name);
        printf("\n Enter the marks obtained in c : ");
        scanf("%f", &Arrays[i].c);
        printf("\n Enter the marks obtained in Python: ");
        scanf("%f", &Arrays[i].Python);
        printf("\n Enter the marks obtained in Data -Structure: ");
        scanf("%f", &Arrays[i].DS);
        Arrays[i].Marks = ((Arrays[i].c + Arrays[i].Python + Arrays[i].DS)/3);
    }
 
    display(num);
}void display(int num)

{
    
    printf("------------------------------------------------------");
    printf("\nStudent Details according to the highest marks:\n");
    
    sorting(num);
    
    

}

void sorting(int num)

{
    int i,j;
    struct Students val;
    
    for(i=0 ; i<num; i++)
    {
        for(j = i+1;j < num; j++)
        {
            if(Arrays[i].Marks < Arrays[j].Marks)
            {
                val = Arrays[i];
                Arrays[i] = Arrays[j];
                Arrays[j] = val;
            }
            
        }
        
    }
     
    for(int i = 0; i < num; i++)
    
    {
        printf("\n position %d : ", i+1);
        printf("\n Register Number : %d", Arrays[i].roll);
        printf("\n Name : %s ", Arrays[i].name);
        printf("\n Marks obtained : %.2f %%", Arrays[i].Marks);
        
    }
    
}
