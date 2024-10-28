#include <stdio.h>
#include <string.h>
#include <math.h>


int main(){

    char s[1000000];
    scanf("%s",s);

    int length = strlen(s);
    int f[26] ={0};


    for (int i = 0; i < length; i++)
    {
        int cha = s[i];

        int index = cha -'a';
       
        f[index] +=1;

        /* code */
    }
    





  for (int i = 0; i < 26; i++) {
        if (f[i] > 0) {
            printf("%c : %d\n", i + 'a', f[i]);
        }
    }
    












    return 0;
}