//
// Created by colorcard on 24-11-11.
//
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int a[n+1];
    a[1]=1;
    a[2]=2;

    if(n==1){
        printf("1");
        return 0;
    }

    if(n==2){
        printf("2");
        return 0;
    }

    for (int i = 3; i <= n; ++i) {
        a[i]=a[i-1]+a[i-2];
    }

    printf("%d",a[n]);

    return 0;
}