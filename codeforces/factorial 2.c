
#include <stdio.h>

// Function to calculate the factorial of a number
unsigned long long factorial(int n) {
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

    while (T--) {
        int N;
        printf("Enter the value of N: ");
        scanf("%d", &N);

        // Calculate and print the factorial of N
        unsigned long long result = factorial(N);
        printf("Factorial of %d is: %llu\n", N, result);
    }

    return 0;
}
