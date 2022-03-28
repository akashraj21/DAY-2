#include<stdio.h>
#include<conio.h>
void MatrixUpperTriangle(int arr[5][5],int n){
    int flag=0;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i][j]!=0)
                flag=1;
        }
    }
    if(flag==0){
        printf("Upper Triangle");
    }
    else{
        printf("Not a Upper Triangle");
    }
}
int main(){
    int arr[5][5],i,j,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    MatrixUpperTriangle(arr,n);
}
