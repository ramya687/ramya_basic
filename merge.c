#include<stdio.h>
int main()
{
    int arr1[]={1,4,5,9};
    int arr2[]={2,4,6,7,8};
   int y=(sizeof(arr1)/sizeof(arr1[0]));
  int z=(sizeof(arr2)/sizeof(arr2[0]));
int  x=y+z;
int result[x];
for(int i=0;i<y;i++)
{
    result[i]=arr1[i];
}
for(int i = 0; i < z; i++)
{
    result[y + i] = arr2[i];
}
for(int i=0;i<x;i++){
    for(int j = 0; j < x - i - 1; j++) 
{
        if(result[j]>result[j+1]){
            int t=result[j];
            result[j]=result[j+1];
            result[j+1]=t;
        }
    }
}
for(int i=0;i<x;i++){
    printf("%d\n",result[i]);
}
    return 0;
}