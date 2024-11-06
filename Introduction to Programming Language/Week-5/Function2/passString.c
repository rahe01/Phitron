#include <stdio.h>
#include <string.h>

void fun(char x[])

{
   int length = strlen(x);
 
   for(int i = 0; i < length; i++){
    printf("%c", x[i]);
   }
}
int main()
{

    char a[10] = "Programming";

    fun(a);

    return 0;
}