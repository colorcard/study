//
// Created by colorcard on 24-11-3.
//

#include <stdio.h>

int main() {
    int n, t;
    scanf("%d", &t);  // 测试用例的数量

    while (t--) {
        scanf("%d", &n);  // 博彩公司的数量

        double max_w = 0, max_d = 0, max_l = 0;
        double w, d, l;

        for (int i = 0; i < n; ++i) {
            scanf("%lf %lf %lf", &w, &d, &l);

            // 找到胜、平、负的最大赔率
            if (w > max_w) max_w = w;
            if (d > max_d) max_d = d;
            if (l > max_l) max_l = l;
        }

        // 判断是否存在必赢策略
        if (1 / max_w + 1 / max_d + 1 / max_l < 1) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}