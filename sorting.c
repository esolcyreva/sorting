#include <stdlib.h>
#include <stdio.h>
#define ARR_LEN 12

int main()
{
    int arr[ARR_LEN] = {7,28,2,17,19,21,15,31,22,4,14,25};

    printf("************Bubble Sort*********************\n");
    bubble_sort(arr, ARR_LEN);
    printf("********************************************\n");
    printf("\n\n\n");
}
