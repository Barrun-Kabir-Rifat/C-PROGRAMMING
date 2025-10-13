#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
 int i=1;
    while(i<=t) {
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

        if (sum % 2 == 0) {
            if (oddCount > 0 && evenCount > 0) {
                printf("YES\n");
            } else if (oddCount == 0 && evenCount >= 2) {
                printf("YES\n");
            } else if (evenCount == 0 && oddCount >= 2) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        } else {
            printf("NO\n");
        }
        i++;
    }

    return 0;
}

