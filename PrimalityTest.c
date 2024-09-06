//
// Created by colorcard on 2024/9/6.
//

#include <stdio.h>

int main(){
    int n,i=2;

    printf("请输入一个整数：\n");
    scanf("%d",&n);

    if(n<=1){
        printf("这个数字不是素数。");
    }
    else{

        while(n%i!=0){
            i++;
        }

        if(i==n){
            printf("这个数字是素数。");
        }
        else{
            printf("这个数字不是素数。");
        }
    }

    return 0;
}