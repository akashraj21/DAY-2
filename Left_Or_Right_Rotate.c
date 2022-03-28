#include<stdio.h>
#include<stdlib.h>
#define Length 6 
void LeftRotate(int arr[]){
    int temp,i,j,k;
    printf("Enter Times Left Rotate: ");
    scanf("%d", &k);
     
    for(i=0; i<k; i++)
    {
        temp=arr[0];
        for(j=0; j<Length-1; j++)
        {
           arr[j]=arr[j+1];
		}
 
         arr[Length-1]=temp;
        
 
    }
    printf("\nAfter Left Rotate  : ");
 
    for(i=0; i<Length; i++)
    {
       printf("%d ",arr[i]);
    }
}
void RightRotate(int arr[]){
}
void PrintStatement(){
    
}
int main(){
    int Select;
    int arr[Length];
    for(int i=0;i<Length;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n1)LeftRotate \n2)RightRotate\n");
    scanf("\n%d",&Select);
    switch(Select){
        case 1:LeftRotate(arr);
        break;
        case 2:RightRotate(arr);
        break;
        default:printf("Select correct");
        break;
    }
}




    
