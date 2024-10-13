#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char letter;
    scanf("%c", &letter);

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
    {

        printf("Vowel");

        /* code */
    }

    else
    {
        printf("Consonant");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
