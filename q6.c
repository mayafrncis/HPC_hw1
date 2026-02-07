#include <stdio.h>

int str_length(char *str) {
    int count = 0;
    while (*str != '\0') {
        str += 1;
        count++;
    }
    return count;
}

int main()
{
    char *s = "Hello World!";
    char *ptr = s;

    while (*ptr != '\0') {
        printf("%c\n", *ptr);
        ptr += 1;
    }

    printf("Length of string: %d\n", str_length(s));

    return 0;
}
