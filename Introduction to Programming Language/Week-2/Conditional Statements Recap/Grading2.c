#include <stdio.h>
#include <math.h>

int main()
{

    int marks;
    scanf("%d", &marks);

    if (marks >= 33 && marks <= 100)
    {
        if (marks >= 80)
        {
            printf("You have got A+ Grade \n");
            if(marks >=90){
                printf("You have got Scholarship \n");
            }
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
        printf("You have passed \n");
    }

    else if (marks >= 0 && marks <= 32)
    {
        printf("You have failed");
        printf("You have got F Grade");
    }

    return 0;
}