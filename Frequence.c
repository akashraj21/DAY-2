#include<stdio.h>

#define Length 100

void initialize();
void print(int arr[Length][Length], int row, int col);
void oddoreven(int arr[Length][Length],int r,int c);


void (*i)();
void (*p)(int*, int, int);


int main()
{
    
    i = initialize;
    i();
    
    return 0;
}


void initialize()
{
    
    int mat[Length][Length];
    int row, col;
    
    printf("\nEnter the Order For Matrix : ");
    scanf("%d %d", &row, &col);
    
    printf("Enter the Elements for %d row and %d Column for Matrix 1.\n", row, col);
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    
    
    printf("\nMatrix : \n");
    print(mat, row, col);
    
    oddoreven(mat, row, col);
    
    
}

void print(int arr[Length][Length],int row,int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) 
        {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
}


void oddoreven(int arr[Length][Length],int r,int c)
{
    int even = 0, odd = 0;
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++) 
        {
            if (arr[i][j] % 2 == 0){
                even += 1;
            }
            else
            {
                odd += 1;
            }
        }
        
    }
    
    printf("\nThe Frequency of odd and even numbers are : ");
    printf("\nEven : %d", even);
    printf("\nOdd : %d", odd);
    
    
}
