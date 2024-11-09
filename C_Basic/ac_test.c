#include <stdio.h>

long long abc(long long n) {
    long long a, b = 0;
    for (a = 1; a < n; a++) {
        if (n % a == 0) {
            b += a;
        }
    }
    return b;
}

void solve() {
    long long d, c, sc, sd;
    for (c = 1; c <= 3000; c++) {
        sc = 0;
        sc = abc(c);
        for (d = 1; d <= 3000; d++) {
            sd = 0;
            sd = abc(d);
            if (d!= c && sc == d && sd == c) {
                printf("(%lld,%lld)", c, d);
            }
        }
    }
}

int main() {
    solve();
    return 0;
}