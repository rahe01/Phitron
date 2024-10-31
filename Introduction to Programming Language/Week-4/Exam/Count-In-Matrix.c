#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,m,x;
    scanf("%d %d %d", &n, &m, &x);

    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }

    int num[x];

    for (int i = 0; i <x; i++)
    {
        /* code */
        scanf("%d", &num[i]);
    }

    int f[1001] ={0};


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           
                f[a[i][j]]++;
                /* code */
            
            

        }
        
        /* code */
    }

    for (int i = 0; i < x; i++){

        printf("%d\n ", f[num[i]]);
    }
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
