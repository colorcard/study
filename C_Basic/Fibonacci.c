//
// Created by colorcard on 2024/9/7.
//

#include <stdio.h>

int main(){
    int n,i;
    int a[64]={0,1};

    scanf("%d",&n);

    for(i=2;i<=n;i++){
        a[i]=a[i-1]+a[i-2];
    }

    printf("%d",a[n-1]);

    return 0;
}