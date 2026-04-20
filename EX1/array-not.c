#include<stdio.h>
int main()
{
   int i,n,a[10],k,t;
   printf("enter elements");
   scanf("%d",&n);
   printf("enter elements one by one");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   printf("enter the element to searched");
   scanf("%d",&k);
   for(i=0;i<n;i++)
   {
      if(a[i]==k)
      {
        t=1;
         break;
      }
   }
   if(t==1)
      printf("element is found");
   else
      printf("element is not found");
   return 0;
}
