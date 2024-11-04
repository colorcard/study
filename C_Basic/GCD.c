//
// Created by colorcard on 2024/9/7.
//


#include <stdio.h>

long long int gcd(long long int a,long long int b){
    return b==0?a:gcd(b,a%b);
}

long long int x,y;

int main(){
    while(scanf("%lld%lld",&x,&y)==2){
        printf("最大公约数为：%lld\n",gcd(x,y));
        printf("最小公倍数为：%lld\n",x/gcd(x,y)*y);
    }

    return 0;
}

