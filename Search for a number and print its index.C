#include <stdio.h>

int main() {
    int n, i, number, found = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the number to search for: ");
    scanf("%d", &number);

    for (i = 0; i < n; i++) {
        if (a[i] == number) {
            printf("Found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Not Found\n");

    return 0;
}