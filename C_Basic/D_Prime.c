//
// Created by colorcard on 24-11-4.
//

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool is_d_prime(int x) {
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            int p = i;
            int q = x / i;
            if (p != q && is_prime(p) && is_prime(q)) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int K;
    scanf("%d", &K);

    while (K--) {
        int x;
        scanf("%d", &x);

        if (is_d_prime(x)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}