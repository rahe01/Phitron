#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d", &n);

    int a[n];

    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
      if (a[i] <1)
      {
        printf("Entry-level candidate\n");
        /* code */
      }
      else if (a[i] >= 1 && a[i] <= 3)
      {
        printf("Junior candidate\n");
        
      }
      else if (a[i] >= 4 && a[i] <= 7){
        printf("Mid-level candidate\n");

      }
      else if (a[i] > 7)
      {
        printf("Senior candidate\n");
        /* code */
      }
      
      
      
    }
    







    return 0;
}
