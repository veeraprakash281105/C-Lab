#include<stdio.h>
int main()
{
   int n,r,rev=0;
   printf("enter the numbers to reverse");
   scanf("%d",&n);
   while(n>0)
   {
      r=n%10;
      rev=rev*10+r;
      n=n/10;
   }
   printf("reverse the no=%d",rev);
   return 0;
}
