#include <stdio.h>

int main() 
{
    int z;
    scanf("%d",&z);
    int num=0;
    while(z>0){
        int r=z%10;
        num=num*10-r;
        z/=10;
    }
    printf("%d",num);
    return 0;
}

