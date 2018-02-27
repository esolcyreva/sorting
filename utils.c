#include<stdlib.h>
#include<stdio.h>
#include"sorting.h"

void print_array(int a[], int len)
{
    int i;
    printf("Printing array:\n");
    for (i=0;i<len;i++) {
        printf("%d\t",a[i]);
    }
    printf("\n");
}

void bubble_sort(int a[], int len)
{
    int i, j;
    for (i=0;i<len;i++) {
        for (j=i+1;j<len;j++) {
            if (a[i] > a[j]) {
                int swap = a[i];
                a[i] = a[j];
                a[j] = swap;
            }
        }
    }
    print_array(a,len);
    return;
}
