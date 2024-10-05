#include <stdio.h>
#include <math.h>

int main()
{

    int marks;
    scanf("%d", &marks);

    if (marks > 100)
    {
        printf("Invalid Marks. Marks should be less than or equal to 100.\n");
    }

    else if (marks >= 80)
    {
        printf("You have got A+ Grade \n");
    }
    else if (marks >= 70)
    {
        printf("You have got A Grade \n");
    }

    else if (marks >= 60)
    {
        printf("You have got A- Grade");
    }
    else if (marks >= 50)
    {
        printf("You have got B Grade");
    }
    else if (marks >= 40)
    {
        printf("You have got C Grade");
    }
    else if (marks >= 33)
    {
        printf("You have got D Grade");
    }
    else
    {
        printf("You have got F Grade");
    }

    return 0;
}