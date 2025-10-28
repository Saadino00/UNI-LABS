#include <stdio.h>
#include <stdlib.h>
#include "stringlib.h"

char *LoadString(int N) {
    char *s = (char *) malloc((N + 1) * sizeof(char));
    if (s == NULL) return NULL;
    printf("Enter string (max %d chars): ", N);
    fgets(s, N + 1, stdin);
    int i = 0;
    while (s[i] != '\0') i++;
    if (i > 0 && s[i - 1] == '\n') s[i - 1] = '\0';
    return s;
}

int StringLength(char *str) {
    int len = 0;
    while (str[len] != '\0') len++;
    return len;
}

void LoadArray(char *p, char arr[]) {
    int i = 0;
    while (p[i] != '\0') {
        arr[i] = p[i];
        i++;
    }
    arr[i] = '\0';
}

void ReverseArray(char arr[], char rev[], int n) {
    for (int i = 0; i < n; ++i)
        rev[i] = arr[n - 1 - i];
    rev[n] = '\0';
}

void DisplayArray(char arr[], int n) {
    for (int i = 0; i < n; ++i)
        putchar(arr[i]);
    putchar('\n');
}

int SumStringASCII(char *p) {
    if (*p == '\0') return 0;
    return (int)(unsigned char)(*p) + SumStringASCII(p + 1);
}

void ReverseString(char *start, char *end) {
    if (start >= end) return;
    char tmp = *start;
    *start = *end;
    *end = tmp;
    ReverseString(start + 1, end - 1);
}
