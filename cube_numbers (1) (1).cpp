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

    printf("The cube of the numbers are:\n");
    for (i = 0; i < n; i++) {
        double cube = numbers[i] * numbers[i] * numbers[i];
        printf("%2lf cube is %2lf\n", numbers[i], cube);
    }

    return 0;
}

