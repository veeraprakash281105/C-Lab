#include<stdio.h>
int main()
{
   int i;
   printf("enter i");
   scanf("%d",&i);
   if(i>85 && i<=100)
      printf("enter A grade",i);
   else
      if(i>70 && i<=85)
         printf("enter B grade",i);
      else
         if(i>50 && i<=70)
            printf("enter C grade",i);
         else
            if(50>i)
               printf("enter D grade",i);
   return 0;
}
