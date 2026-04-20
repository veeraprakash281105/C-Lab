#include<stdio.h>
int main()
{
   int n,r,rev=0,original;
   printf("enter the no");
   scanf("%d",&n);
   original=n;
   while(n>0)
   {
      r=n%10;
      rev=rev*10+r;
      n=n/10;
   }
   if(original==rev)
      printf("the given no is palindrome");
   else
      printf("not palindrome");
   return 0;
}
