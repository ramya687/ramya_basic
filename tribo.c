#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of tribonacci terms: ");
    scanf("%d", &n);
int a = 0, b = 1,c = 2, next;
    if (n >= 1) {
        printf("%d ", a); 
    }
    if (n >= 2) {
        printf("%d ", b);
    }
    if(n >= 3) {
        printf("%d ", c);
    }
    for (int i = 3; i <= n; i++) {
        next = a + b + c;
        printf("%d ", next);
        a = b;
        b = c;
        c=next;
    }
 printf("\n");
    return 0;
}