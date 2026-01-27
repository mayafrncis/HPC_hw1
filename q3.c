#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 2;
    int b = 3;
    printf("a before swap: %d\n", a);
    printf("b before swap: %d\n", b);
    swap(&a, &b);
    printf("a after swap: %d\n", a);
    printf("b after swap: %d\n", b);
    return 0;
}
