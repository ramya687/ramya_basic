#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of Fibonacci terms: ");
    scanf("%d", &n);
int a = 0, b = 1, next;
    if (n >= 1) {
        printf("%d ", a); 
    }
    if (n >= 2) {
        printf("%d ", b);
    }
    for (int i = 3; i <= n; i++) {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
 printf("\n");
    return 0;
}

    