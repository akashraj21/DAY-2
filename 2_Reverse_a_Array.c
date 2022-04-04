#include <stdio.h>
#include <stdlib.h>
#define Length 6
void ReverseArray(int arr[]){
    int Temp_Var;
    for(int Iteration = 0; Iteration<Length/2; Iteration++){
        Temp_Var = arr[Iteration];
        arr[Iteration] = arr[Length-Iteration-1];
        arr[Length-Iteration-1] = Temp_Var;
    }
    
}
void PrintArray(int arr[]){
    for(int Iteration = 0; Iteration <Length; Iteration++){
        printf("%d,", arr[Iteration]);
    }
}
int main(){
    int arr[Length];
    for(int Iteration=0;Iteration<Length;Iteration++){
        scanf("%d",&arr[Iteration]);
    }
    printf("\n");
    printf("{");
    ReverseArray(arr);
    PrintArray(arr);
    printf("}");
}
