#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define ARR_LEN 12

int main(int argc, char* argv[])
{
    int arr[ARR_LEN] = {7,28,2,17,19,21,15,31,22,4,14,25};
    int choice = 0;
    if (argc != 2) {
        printf("\nEnter correct arguments\n"
        "1. Bubble Sort\n2.Insertion Sort\n3.Selection Sort\n");
        return 0;
    }
    choice = atoi(argv[1]);
    if (choice < 1) {
        return 0;
    }

    printf("Original array :\n");
    print_array(arr, ARR_LEN);
    printf("\n");
    switch (choice) {
        case 1 :
        printf("************Bubble Sort*********************\n");
        bubble_sort(arr, ARR_LEN);
        printf("********************************************\n");
        break;
        case 2 :
        printf("************Insertion Sort******************\n");
        insertion_sort(arr, ARR_LEN);
        printf("********************************************\n");
        break;
        case 3 :
        printf("************Selection Sort******************\n");
        selection_sort(arr, ARR_LEN);
        printf("********************************************\n");
        break;
    }
    return 0;
}
