#include <stdio.h>
#include <math.h>

int a[100000];
int b[100000];

int main(){

    int len;
    scanf("%d", &len); // Read the length of the array

    // Read the array elements
    for (int i = 0; i < len; i++) {
        scanf("%d", &a[i]);
    }

    // Reverse array a[] into b[]
    for (int i = 0, j = len - 1; i < len; i++, j--) {
        b[j] = a[i];  // Copy the i-th element of a[] to the j-th position of b[]
    }

    // Output the reversed array stored in b[]
    for (int i = 0; i < len; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}
