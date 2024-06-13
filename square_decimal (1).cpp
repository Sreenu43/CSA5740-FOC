#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    double numbers[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%lf", &numbers[i]);
    }

    printf("The squares of the numbers are:\n");
    for (i = 0; i < n; i++) {
        double square = numbers[i] * numbers[i];
        printf("%2lf squared is %2lf\n", numbers[i], square);
    }

    return 0;
}

