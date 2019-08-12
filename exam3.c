#include <stdio.h>

int main()
{
   int c, first, last, mid, n, s, a[100];
   srand(time(NULL));

   printf("Enter no of elements\n");

   scanf("%d",&n);

   for (c = 0; c < n; c++)
      a[c]=(rand()%100)+1;

   for(int j=0;j<n;j++)
      printf("%d\n",a[j]);

   printf("Enter element\n");
   scanf("%d", &s);

   first = 0;
   last = n - 1;
   mid = (first+last)/2;

   while (first <= last) {
      if (a[mid] < s)
         first = mid + 1;
      else if (a[mid] == s) {
         printf("Position %d", mid+1);
         break;
      }
      else
         last = mid - 1;

      mid = (first + last)/2;
   }
   if (first > last)
      printf("Not found!");

   return 0;
}
