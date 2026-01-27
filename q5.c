#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a = (int *)malloc(sizeof(int));
    if (a == NULL) {
        perror("malloc");
        return 1;
    }
    *a = 5;
    printf("Value of a: %d\n", *a);

    int *arr = (int *) malloc(5 * sizeof(int));

    if (arr == NULL) {
        perror("malloc");
        free(a);
        a = NULL;
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        *(arr + i) = i + 1;
        printf("Value added: %d\n", *(arr + i));
    }

    free(a);
    free(arr);
    a = NULL;
    arr = NULL;
    return 0;
}
