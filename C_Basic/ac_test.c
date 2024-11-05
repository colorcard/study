#include <stdio.h>

int main() {
    int num, case_num = 1;

    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break;
        }

        printf("case %d:\n", case_num++);

        for (int i = 1; i <= num; i++) {
            for (int j = 0; j < num - i; j++) {
                printf(" ");
            }
            for (int j = 0; j < 2 * i - 1; j++) {
                printf("%d", i);
            }
            printf("\n");
        }
    }

    return 0;
}