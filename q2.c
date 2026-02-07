#include <stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};
    int* ptr = arr;
    for (int i = 0; i < 5; i++) {
        printf("Value of element: %d\n", *(ptr + i));
        *(ptr + i) *= 2;
        printf("New value of element with pointer: %d\n", *(ptr + i));
        printf("New value of element with array: %d\n", arr[i]);
        printf("-----------------------------\n");
    }

    return 0;
}
