#include <stdio.h>
#include <math.h>

int main() {
    long long n;
    scanf("%lld", &n);

    long long i;
    long long x;
    long long max_i = sqrt(n);
    long long d_size = 0;
    long long d[100000]; // Assuming an upper limit on the size

    for (i = 2; i * i <= n; ++i) {
        x = i * i;
        while (x <= n) {
            d[d_size++] = x;
            x *= i;
        }
    }

    printf("%lld\n", n - d_size);

    return 0;
}

