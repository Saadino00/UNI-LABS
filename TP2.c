#include <stdio.h>
//First function returns the sum of two integers
int add(int a, int b){ 
    return a + b;
}

//Second function returns the larger of two integers
int max(int a, int b){
    if(a > b)
    return a;
    else
    return b;
}

//Third function returns the average of an array
float average(int arr[], int n){
    float sum;
    for(int i=0; i < n; i++){
        sum += arr[i];
    }
    return sum / n;
}

//Function main
int main(){
    int n;
    printf("Enter dimension of the array : ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter [%d] : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int max_integer = arr[0];
    for(int i = 0; i < n; i++){
        max_integer = max(max_integer, arr[i]);
    }

    printf("The largest number in that array : %d \n", max_integer);
    printf("The average of the array : %f \n", average(arr, n));
    return 0;
}