
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int sum = 0;
        int oddCount = 0;
        int evenCount = 0;

        for (int i = 0; i < n; i++) {
            int num;
            scanf("%d", &num);
            sum += num;

            if (num % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }

        if (sum % 2 == 0 && (oddCount > 0 && evenCount > 0)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
