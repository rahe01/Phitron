#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);


    int a[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int peak_count = 0; 

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int is_peak = 1; 

            if (i > 0 && a[i][j] <= a[i-1][j]) {
                is_peak = 0;
            }

      
            if (i < m-1 && a[i][j] <= a[i+1][j]) {
                is_peak = 0;
            }

        
            if (j > 0 && a[i][j] <= a[i][j-1]) {
                is_peak = 0;
            }

      
            if (j < n-1 && a[i][j] <= a[i][j+1]) {
                is_peak = 0;
            }

            if (is_peak) {
                peak_count++;
                printf("%d %d\n", i + 1, j + 1); // 
            }
        }
    }

 
    printf("%d\n", peak_count);

    return 0;
}
