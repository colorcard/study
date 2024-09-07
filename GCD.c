//
// Created by colorcard on 2024/9/7.
//

#include <stdio.h>

int gcd(int a,int b);
int x,y;

int main(){
    printf("请输入两个数字：\n");
    scanf("%d%d",&x,&y);
    printf("最大公约数是%d.",gcd(x,y));

    return 0;
}

int gcd(int a,int b){
    int i,mod;

    if(b>a){i=b;b=a;a=i;}

    if(b==0){}
    else{
        do{
            mod=a%b;
            a=b;
            b=mod;
        }while (mod!=0);
    }

    return a;
}