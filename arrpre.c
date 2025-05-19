#include <stdio.h>
int main()
{
    int arr[5]={5,4,3,2,1};
    int n;
    scanf("%d",&n);
    for(int i=0;i<5;i++){
    if(n==arr[i]){
    printf("present");
    return 0;
    }
    }
    printf("not present");
    return 0;
}