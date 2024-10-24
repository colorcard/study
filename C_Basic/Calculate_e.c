//
// Created by colorcard on 2024/9/6.
//
//

#include <stdio.h>

int main(){
    double tem=1,e=1;
    int n,i=1,j;

    printf("请输入一个n以确定你要计算e的精度：\n");
    scanf("%d",&n);

    if(n<1){
        printf("请输入大于1的数字。");
    }

    else{
        while(i<=n){
            tem=1;//应该注意对于tem的初始化
            for(j=1;j<=i;j++){
                tem=j*tem;
            }
            e=e+1/tem;
            i++;
        }
    }

    printf("e的结果为%g",e);
    return 0;
}