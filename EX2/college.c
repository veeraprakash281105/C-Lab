#include<stdio.h>
struct college
{
   char state[20];
   int e;
   int a;
   int m;
   int n;
};
int main()
{
   int i,n,j,max,temp,tc[206];
   struct college c[20];
   printf("enter no.\t");
   scanf("%d",&n);
   printf("\n enter state & no of col\t");
   for(i=0;i<n;i++)
   {
      scanf("%s",c[i].state);
      scanf("%d%d%d%d",&c[i].e,&c[i].a,&c[i].m,&c[i].n);
   }
   for(i=0;i<n;i++)
   {
      tc[i]=c[i].e+c[i].a+c[i].m+c[i].n;
      printf("%sHAS%dCOLLEGE",c[i].state,tc[i]);
   }
   for(i=0;i<n-1;i++);
   {
      for(j=i+1;j<n;j++)
      {
         if(tc[i]>tc[j])
         {
            temp=tc[i];
            tc[i]=tc[j];
            tc[j]=temp;
         }
         max=tc[j];
      }
   }
   printf("\n MAX NO OF COL IS %d IS IN THE STATE%s",max,c[i].state);
   return 0;
}

