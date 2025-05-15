#include <stdio.h>
int main()
{
   int x=6,flag=0;
   for(int i=1;i<=x;i++)
   {
       if(x%i==0)
       flag++;
   }
   if(flag==0)
   printf("%d prime num \n",x);
   else 
   printf("%d not prime num \n",x);
   return 0;
}
   
   