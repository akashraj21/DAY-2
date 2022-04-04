#include<stdio.h>
#include<stdlib.h>
void SumofRowCol(int arr[10][10],int m,int n){
    int sum=0;
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            sum=sum+arr[i][j];
        }
        printf("Sum of the [%d] row is = %d\n",i,sum);
        sum=0;
    }
    sum=0;
    for(int j=0;j<n;++j){
        for(int i=0;i<m;++i){
            sum=sum+arr[i][j];
        }
        printf("Sum of the [%d] Column is = %d\n",j,sum);
        sum=0;
    }
}
int main(){
    int arr[10][10];
    int m,n;
    printf("Enter A Row Size\n");
    scanf("%d",&m);
    printf("Enter A Column Size\n");
    scanf("%d",&n);
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("_____GIVEN MATRIX_____\n");
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            printf("%3d",arr[i][j]);
        }
        printf("\n");
    }
    SumofRowCol(arr,m,n);
}
