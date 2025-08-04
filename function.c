#include <stdio.h>
int isPalindrome(int n) {
    int rev = 0, original = n;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return original == rev;
}
int main() {
    int num = 121;
    if (isPalindrome(num))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}
