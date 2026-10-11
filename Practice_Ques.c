// Write a C program to traverse an array and find the second largest element.

#include <stdio.h>

int main() {
    int n, i, largest, secondLargest;
    int hasSecond = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    largest = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
            hasSecond = 1;
        } else if (a[i] < largest &&
                   (!hasSecond || a[i] > secondLargest)) {
            secondLargest = a[i];
            hasSecond = 1;
        }
    }

    if (hasSecond)
        printf("Second largest element = %d\n", secondLargest);
    else
        printf("There is no second distinct largest element.\n");

    return 0;
}