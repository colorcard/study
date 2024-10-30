//
// Created by colorcard on 2024/9/7.
//

#include <stdio.h>

int gcd(int a,int b);
int x,y;

int main(){
    scanf("%d%d",&x,&y);
    printf("最大公约数是:%d\n",gcd(x,y));
    printf("最小公倍数是:%d",(x*y)/gcd(x,y));

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