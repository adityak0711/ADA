#include<stdio.h>

void main()
{
 int n;
 srand(time(NULL));
 scanf("%d",&n);
 int a[n];
 
 for(int j=0;j<n;j++)
 {
  a[j]=(rand()%100)+1;
 }
 
 for(int i=0;i<n;i++)
 {
  printf("%d\n",a[i]);
 }
 
 int  max=a[0];
 for(int k=0;k<n;k++)
 {
  if(max<a[k])
  {
   max=a[k];
  }

 }
printf("%d",max);

}
