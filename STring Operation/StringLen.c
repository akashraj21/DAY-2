#include<stdio.h>
void FindLen(char str[],int len);

void FindLen(char str[],int len){
    for(int i=0;str[i]!='\0';i++){
        len++;
    }
    
    printf("The Length of the string...%d",len);
}
void main(){
    char string[50];
    int i,len=0;
    printf("Enter a string");
    scanf("%s",&string);
    FindLen(string,len);
}