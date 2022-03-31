#include<stdio.h>
int main()
{ 
	int i=0,j=0,m=0,n=0,even=0,od=0;
	printf("enter the size of rows ");
	scanf("%d",&m);
	printf("enter the size of colums ");
	scanf("%d",&n);
	int mat[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("enter value of mat[%d][%d] ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(mat[i][j]%2==0){
				even++;
			}
			else{
				od++;
			}
		}
		printf("\n");
	}
	printf("Number of even numbers is matrix is %d\n",even);
	printf("Number of odd numbers is matrix is %d",od);
}
