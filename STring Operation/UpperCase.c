#include<stdio.h>

void main(){
    char str[10];
    
    printf("\nEnter a String : ");
    scanf("%s",str);
    
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
    printf("\n The UpperCase String :%s",str);
}
