#include <stdio.h>
#include <limits.h>
int main()
{
    int x=5,y=6;
    printf("%d%d \n",x,y);            // Line 1
    printf("%d%d \n",x++,y++);        // Line 2
    printf("%d%d \n",((x++)-(y--)+3)); // Line 3
    return 0;
}


