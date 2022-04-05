#include<stdio.h>

void main(){
    char str[10];
    
    printf("\nEnter a String : ");
    scanf("%s",str);
    
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='B'){
            str[i]=str[i]+32;
        }
    }
    printf("The LowerCase String");
}
