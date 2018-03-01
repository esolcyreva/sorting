#include<stdlib.h>
#include<stdio.h>
#include"sorting.h"

void print_array(int a[], int len)
{
    int i;
    for (i=0;i<len;i++) {
        printf("%d\t",a[i]);
    }
    printf("\n");
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void bubble_sort(int a[], int len)
{
    int i, j;
    for (i=0;i<len;i++) {
        for (j=i+1;j<len;j++) {
            if (a[i] > a[j]) {
                swap(&a[i], &a[j]);
            }
        }
        printf("\nStep %d:\n", i+1);
        print_array(a, len);
    }
    printf("\nFinal:\n");
    print_array(a,len);
    return;
}

void insertion_sort(int a[], int len)
{
    int i,j;
    for(i=1;i<len;i++) {
        j = i;
        while (j>0 && a[j-1] > a[j]) {
            swap(&a[j], &a[j-1]);
        }
        printf("Step %d:\n", i);
        print_array(a, len);
    }
    printf("\nFinal:\n");
    print_array(a, len);
}

void selection_sort(int a[], int len) {
    int i,j;
    for(i=0;i<(len-1);i++) {
        int min = i;
        for(j=i+1;j<len;j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        if (min != i) {
            swap(&a[i], &a[min]);
        }
        printf("\nStep %d:\n", i+1);
        print_array(a, len);
        
    }
    printf("\nFinal:\n");
    print_array(a, len);
}
