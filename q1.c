#include <stdio.h>

int main()
{
    int var = 4;
    int* ptr = &var;
    printf("Address of var using var: %p", &var);
    printf("\nAddress of var using ptr: %p", ptr);
    *ptr = 5;
    printf("\nNew value of var: %d", var);

    return 0;
}
