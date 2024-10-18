#include <stdio.h>
#include <math.h>

int main()
{

    int a;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    int min_pos = 0, max_pos = 0;

    for (int i = 0; i < a; i++)
    {
        /* code */
        if (arr[i] < min)
        {
            min = arr[i];
            min_pos = i; /* code */
            /* code */
        }
        if (arr[i] > max)

        {

            max = arr[i]; /* code */
            max_pos = i;  /* code */
            /* code */
        }
    }

    // printf("Maximum: %d\n", max);
    // printf("Minimum: %d\n", min);

    int temp = arr[min_pos];

    arr[min_pos] = arr[max_pos];
    arr[max_pos] = temp;
    for (int i = 0; i < a; i++)
    {
        /* code */
        printf("%d ", arr[i]);
        /* code */
    }
    

    return 0;
}