#include <stdio.h>
#define max 64

void exchange(int *px, int *py);
void bubble(int a[], int n);

int main() {
    int i = 0, j;
    int a[max];

    // 使用 scanf 读取输入，直到遇到非数字输入（例如回车）
    while (scanf("%d", &a[i]) == 1) {
        i++;
    }

    // 调用冒泡排序
    bubble(a, i);

    // 输出排序后的数组
    for (j = 0; j < i; j++) {  // 修正打印条件，防止越界
        printf("%d ", a[j]);
    }

    printf("\n");
    return 0;
}

void exchange(int *px, int *py) {
    int tem;
    tem = *px;
    *px = *py;
    *py = tem;
}

void bubble(int a[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {  // 修正循环条件
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                exchange(&a[j], &a[j + 1]);
            }
        }
    }
}