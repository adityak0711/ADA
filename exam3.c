#include<stdio.h>

void main()
{
 int n;
 scanf("%d",&n);
 int a[n];
 for(int i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }

 int x,c,mid;
 printf("enter element");
 scanf("%d",&x);
 int l=0, h=n-1;

 while(l<=h)
 {
  mid=(l+h)/2;
  if(x==a[mid])
  {
   c=mid;
   printf("%d",c);
   break;
  }
  else 
    if(x<a[mid])
     {
     h=mid-1; 
     }
   else
    {
      l=mid+1;
     }
 }

printf("%d",-1);

}
