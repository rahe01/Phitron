#include <stdio.h>

void digit()
{
    int a;
    scanf("%d", &a);
    int arr[a];

    int nonZero[1000];
    int countzero = 0;
    int nonzerocount = 0;
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] != 0)
        {
            nonZero[nonzerocount++] = arr[i];
        }
        else
        {
            countzero++;
        }
    }

    for (int i = 0; i < nonzerocount; i++)
    {
       arr[i] = nonZero[i];
    }

    for (int i = nonzerocount; i < a; i++)
    {

        arr[i] = 0;
    }
    

    for (int i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
  
};

int main()
{

    digit();
    return 0;
}
