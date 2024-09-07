//
// Created by colorcard on 2024/9/6.
//

#include <stdio.h>
#include <math.h>

int main(){
    int n,i;

    printf("请输入一个整数：\n");
    scanf("%d",&n);

    if(n<=1){
        printf("这个数字不是素数。");
    }
    else{

        for(i=2;i<=sqrt(n);i++){
            if (n % i == 0) {
                printf("这个数字不是素数。");
                return 0;
            }
        }

            printf("这个数字是素数。");
    }

    return 0;
}