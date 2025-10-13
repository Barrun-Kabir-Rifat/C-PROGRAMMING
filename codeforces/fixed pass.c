#include <stdio.h>

int main() {
    int password;

    while (scanf("%d", &password) != EOF) {
        if (password == 1999) {
            printf("Correct\n");
            return 0;
        } else {
            printf("Wrong\n");
        }
    }

    return 0;
}
