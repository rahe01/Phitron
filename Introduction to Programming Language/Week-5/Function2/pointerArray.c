#include <stdio.h>

void fun(int *x, int n)

{
  
    for (int i = 0; i < n; i++)
    {
        printf("%d ", x[i]);
       
    }

    x[0] = -99;

}
int main()
{

    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    fun(a, 10);
  for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
       
    }



    return 0;
}