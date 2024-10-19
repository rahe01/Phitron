#include <stdio.h>
#include <math.h>

int a[100000];
int main(){
 int len;
    scanf("%d",&len);
    for(int i=0;i<len;i++){
        scanf("%d",&a[i]);
    }

    int index;
    scanf("%d",&index);

    for (int i = index; i < len-1; i++)
    {
        a[i] = a[i+1];
        /* code */
    }
    len--;

    for(int i=0;i<len;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    

    return 0;
}