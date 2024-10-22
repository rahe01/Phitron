#include<stdio.h>

int main()
{
   int n;
   scanf("%d", &n);
   long long a[n];

   // Input array elements
   for(int i = 0; i < n; i++)
   {
     scanf("%lld", &a[i]);
   }

   int temp[n];

   // Copy elements in reverse order
   for(int i = 0; i < n; i++)
   {
      temp[i] = a[n-1-i];
   }

   int yes = 0;
   int no = 0;

   // Output both arrays
   for (int i = 0; i < n; i++)
   {
     if (temp[i] == a[i])
     {
        /* code */
        yes++;
     }
     else{
        /* code */
        no++;
     }

 
     
     
   }

       if (yes >0)
     {
        printf("YES\n");
        /* code */
     }
     else{
        printf("NO\n");
        /* code */
     }

   return 0;
}
