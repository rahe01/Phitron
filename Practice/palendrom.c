#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char c[10001];
    scanf("%s",c);
    int n = strlen(c);


    int fr[26] = {0};
    int odd= 0;
    for (int i = 0; i < n; i++) {
        fr[c[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (fr[i] % 2 != 0){
            odd++;
        }
        /* code */
    }

    int operation = (odd >0) ? odd - 1 : 0;
    printf("%d\n", operation);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
