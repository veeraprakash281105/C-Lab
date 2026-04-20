#include<stdio.h>
#include<stdbool.h>
void swap(int *a,int *b)
{
   int temp=*a;
   *a=*b;
   *b=temp;
}
bool next_permutation(int *arr,int n)
{
   int i=n-2;
   while(i>=0&&arr[i]>=arr[i+1])i--;
   if(i<0)
      return false;
   int j=n-1;
   while(arr[j]<=arr[i];j--);
   swap(&arr[i],&arr[j]);
   for(k=i+1;l=n-1;k<1;k++;l--)
   {
      swap(&arr[k],&arr[l]);
   }
   return true;
}
int main()
{
   int digits[10]={0,1,2,3,4,5,6,7,8,9};
   do
   {
      if(digits[0]==0)
         contine;
      int valid=1;
      long val=0;
      for(i=0;i<10;i++)
      {
         val=val*10+digits[i];
         if((val%(i+10))!=0)
         {
            valid=0;
            break;
         }}
      if(valid)
      {
         printf("valid 10-digit number :");
         for(i=0;i<=10;i++)
         {
            printf("%d",digits[i]);
         }
         printf("\n");
         break;
      }
      while(next_permutation(digits,10));
      return 0;
   }
