#include <stdio.h>
#include <stdlib.h>
#include "stringlib.h"

int main() {
    int n;
    printf("Enter max string size: ");
    scanf("%d", &n);
    getchar();

    char *str = LoadString(n);
    int len = StringLength(str);

    char arr[len + 1], rev[len + 1];
    LoadArray(str, arr);

    printf("\nOriginal array: ");
    DisplayArray(arr, len);

    ReverseArray(arr, rev, len);
    printf("\nReversed array: ");
    DisplayArray(rev, len);

    printf("\nSum of ASCII values: %d\n", SumStringASCII(str));

    ReverseString(str, str + len - 1);
    printf("\nReversed string (in place): %s\n", str);

    free(str);
    return 0;
}
