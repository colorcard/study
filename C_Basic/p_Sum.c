//
// Created by colorcard on 2024/9/10.
//

#include <stdio.h>
#define max 64

int main(){
    int a[max];
    int i,j,*p,sum=0;

    do {
        scanf("%d",&a[i]);
        i++;
    }while(getchar()!='\n');

    p=a;

    for(j=0;j<i;j++){
        sum=sum+*p;
        p++;
    }

    printf("%d",sum);

    return 0;
}