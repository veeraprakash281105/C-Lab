#include<stdio.h>
int main()
{
   int n,original=0,i;
   printf("enter the no");
   scanf("%d",&n);
   for(i=2;i<n;i++)
   {
      if(n%i!=0)
         continue;
      else
      {
         original=1;
         printf("not prime");
      }
   }
   if(original==0)
   {
      printf("prime");
   }
   return 0;
}
