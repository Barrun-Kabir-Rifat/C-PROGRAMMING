#include <stdio.h>

// Function to calculate the factorial of a number
unsigned long long factorial(int n) {
    if (n == 0)
        return 1;

    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int T;
    printf("Enter the number of test cases: ");
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int N;
        printf("Enter the value of N: ");
        scanf("%d", &N);

        // Calculate and print the factorial of N
        unsigned long long result = factorial(N);
        printf("Factorial of %d is: %llu\n", N, result);
    }

    return 0;
}
