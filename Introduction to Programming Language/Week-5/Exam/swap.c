#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        int temp = a[i][0];
        a[i][0] = a[i][m-1];
        a[i][m-1] = temp;
        /* code */
    }
    for (int i = 0; i < m; i++){
        int temp = a[0][i];
         a[0][i] = a[n-1][i];
        a[n-1][i] = temp;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
