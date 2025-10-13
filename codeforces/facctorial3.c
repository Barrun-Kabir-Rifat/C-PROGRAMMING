
#include <stdio.h>

int main() {
    int T;
    printf("Enter the number of test cases: ");
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int N;
        printf("Enter the value of N: ");
        scanf("%d",&N);

        unsigned long long fact = 1;
        for (int j = 1; j <= N; j++) {
            fact *= j;
        }

        printf("Factorial of %d is: %llu\n", N, fact);
    }

    return 0;
}
