#ifndef STRINGLIB_H
#define STRINGLIB_H

char *LoadString(int N);
int StringLength(char *str);
void LoadArray(char *p, char arr[]);
void ReverseArray(char arr[], char rev[], int n);
void DisplayArray(char arr[], int n);
int SumStringASCII(char *p);
void ReverseString(char *start, char *end);

#endif
