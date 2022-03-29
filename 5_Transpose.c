#include <stdio.h>
void Transpos(int a[5][5],int m,int n){
    printf("Before Transpose Matrix: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    printf("After Transpose Matrix: \n");
    printf("\n");
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[5][5];
    int m,n;
    printf("Enter the row and Column\n");
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            scanf("%d",&a[i][j]);
        }
    }
    Transpos(a,m,n);
}
