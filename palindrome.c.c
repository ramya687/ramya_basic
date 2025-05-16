#include <stdio.h>

int main() {
    int x, original;
    scanf("%d", &x);
    original = x;
    int num = 0;

    while (x > 0) {
        int r = x % 10;
        num = num * 10 + r;
        x /= 10;
    }

    printf("%d\n", num); 

    if (original == num)
        printf("yes\n");  
    else
        printf("no\n");   

    return 0;
}
