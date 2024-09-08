//
// Created by colorcard on 2024/9/8.
//

#include <stdio.h>
#define max 64

int main(){
    int i,k;
    char line[max];

    printf("输入字符串：\n");
    k=0;
    while ((line[k]=getchar())!='\n'){
        k++;
    }
    line[k]='\0';

    for(i=0;i<=k/2;i++){
        if(line[i]!=line[k-i-1]){
            printf("这不是个回文字符。");
            return 0;
        }
        else{
            break;
        }
    }
    printf("这是一个回文字符。");
    return 0;
}