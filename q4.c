#include <stdio.h>

int main()
{
    int var = 2;
    int *ptr = &var;
    int **doubleptr = &ptr;
    printf("Value of var using ptr: %d\n", *ptr);
    printf("Value of var using doubleptr: %d\n", **doubleptr);
}
