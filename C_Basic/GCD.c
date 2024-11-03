//
// Created by colorcard on 2024/9/7.
//

//int gcd(int x, int y) {
//    return y == 0 ? x : gcd(y, x % y);
//}

#include <stdio.h>

long long int gcd(long long int a,long long int b);
long long int x,y;

int main(){
    while(scanf("%lld%lld",&x,&y)==2){
        //printf("%lld\n",gcd(x,y));
        printf("%lld\n",x/gcd(x,y)*y);
    }

    return 0;
}

long long int gcd(long long int a,long long int b){
    long long i,mod;

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