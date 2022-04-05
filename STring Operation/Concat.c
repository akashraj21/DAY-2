#include<stdio.h>

void main(){
    char str1[20],str2[20];
    int i,j;
    printf("\nEnter a String : ");
    scanf("%s",str1);
    printf("\nEnter a String : ");
    scanf("%s",str2);
    int len = 0;
    
    for (i = 0; str1[i] != '\0'; i++)
    {
        len = len + 1;
    }
    
    for(j = 0;  str2[j]!= '\0'; j++)
    {
        str1[len] = str2[j];
        len++;
    }
    
    printf("\n Concatinated String : %s", str1);
}
