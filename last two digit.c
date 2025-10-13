#include <stdio.h>

int main() {
    // Read input values
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);

    // Perform multiplication
    int product = A * B * C * D;

    // Get the last two digits
    int lastTwoDigits = product % 100;

    // Print the last two digits
    printf("%02d\n", lastTwoDigits);

    return 0;
}

