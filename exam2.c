#include<stdio.h>

void main()
{
 int n;
scanf("%d",&n)
 int i[n];
 for(int j=0;j<n;j++)
 {
  scanf("%d",&i[j]);
 }
int  max=i[0];
 for(int k=0;k<n;k++)
 {
  if(max<i[k])
  {
   max=i[k];
  }

 }
printf("%d",max);

}
