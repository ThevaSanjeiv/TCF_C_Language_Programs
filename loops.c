#include <stdio.h>
int main() {
    int start = 10, end = 50;
    for (int i = start; i <= end; i++) {
        int isPrime = 1;
        if (i <= 1)
            continue;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }
    return 0;
}
