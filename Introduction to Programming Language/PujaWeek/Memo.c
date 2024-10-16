#include <stdio.h>

int main() {
    long long a, b, k;

    // Reading input values for a, b, and k
    scanf("%lld %lld %lld", &a, &b, &k);

    // Check if both a and b are divisible by k
    if (a % k == 0 && b % k == 0) {
        printf("Both\n");
    }
    // Check if only a is divisible by k
    else if (a % k == 0) {
        printf("Memo\n");
    }
    // Check if only b is divisible by k
    else if (b % k == 0) {
        printf("Momo\n");
    }
    // If neither a nor b is divisible by k
    else {
        printf("No One\n");
    }

    return 0;
}
