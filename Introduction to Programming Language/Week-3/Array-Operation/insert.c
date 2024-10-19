#include <stdio.h>
#include <math.h>

int a[100000];
int main(){
    int len =0;
    scanf("%d",&len);
    for(int i=0;i<len;i++){
        scanf("%d",&a[i]);
    }

    int index, value;
    scanf("%d %d",&index,&value);

    len++;

    for(int i =len-1; i>=index; i--){
        a[i+1]= a[i];
    }
    a[index]=value;

    for(int i = 0; i<len; i++){
        printf("%d ",a[i]);
    }



    return 0;
}