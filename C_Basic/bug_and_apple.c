//
// Created by colorcard on 2024/9/5.
//你买了一箱n个苹果，很不幸的是买完时箱子里混进了一条虫子。虫子每x小时能吃掉一个苹果，
//假设虫子在吃完一个苹果之前不会吃另一个，那么经过y小时你还有多少个完整的苹果？


#include <stdio.h>

int main() {
    int n,x,y,end;

    printf("请以苹果数量n、虫子每x小时吃一个苹果、经过y小时输入:\n");
    scanf("%d %d %d",&n,&x,&y);

    if(y>=n*x) {
        end=0;
    }
    else if(y%x!=0) {
        end=n-y/x-1;
    }
    else {
        end=n-y/x;
    }

    printf("还剩余%d个苹果",end);
    return 0;
}