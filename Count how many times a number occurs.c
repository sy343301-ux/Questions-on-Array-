#include <stdio.h>

int main() {
    int n, i, number, count = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the number to count: ");
    scanf("%d", &number);

    for (i = 0; i < n; i++) {
        if (a[i] == number) {
            count++;
        }
    }

    printf("The number occurs %d times.\n", count);

    return 0;
}