#include<stdio.h>
#include<string.h>
int main()
{
  char a[100],b[100],i,j,len=0;
    printf("enter first string");
   scanf("%s",a);
   printf("enter second string");
   scanf("%s",b);
   for(i=0;a[i]!='\0';i++)
   {
      len=i;
   }
   for(j=0;b[j]!='\0';j++)
   {
      a[i]=b[j];
      i++;
   }
   a[i]='\0';
   printf("concatination string is %s",a);
   return 0;
}
