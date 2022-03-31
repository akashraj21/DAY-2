#include<stdio.h>

enum months{Jan=1,Feb,Mar,April,May,June,July,August,September,October,November,December};

int main()
{
    char *arr[100] = {"Jan", "Feb", "Mar", "April", "May", "June", "July", "August", "Sept", "Oct", "Nov", "Dec"};
    for (int i = Jan; i <= December; i++){
        printf("%s : %d\n", arr[i-1], i);
    }
    return 0;
}
