#include<stdio.h>
#include<stdlib.h>
void Interchange_diagonals(int array[10][10],int m,int n){
    int a;
    for (int i = 0; i < m; ++i)
        {
            a = array[i][i];
            array[i][i] = array[i][m - i - 1];
            array[i][m - i - 1] = a;
        }
        printf("After changing the \n");
        printf("Main diagonal & secondary diagonal\n");
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                printf(" %d", array[i][j]);
            }
            printf("\n");
        }
    }
void main ()
{
    static int array[10][10];
    int i, j, m, n, a;
 
    printf("Enter the size of matix \n");
    scanf("%d %d", &m, &n);
    if (m == n)
    {
        printf("Enter the co-efficients\n");
        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                scanf("%d", &array[i][j]);
            }
        }
        printf("The given matrix is \n");
        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                printf(" %d", array[i][j]);
            }
            printf("\n");
        }
        Interchange_diagonals(array,m,n);
}
}
