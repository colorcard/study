//
// Created by colorcard on 2024/9/7.
//

#include <stdio.h>

int main(){
    int n,i,k,index,tem;
    int a[64];

    printf("输入需要排序的数字个数n：\n");
    scanf("%d",&n);

    printf("输入相应个数的数字:\n");

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(k=0;k<n;k++){
        index=k;
        for(i=k+1;i<n;i++){
            if(a[i]<a[index]){
                index=i;
            }
        }
        tem=a[index];
        a[index]=a[k];
        a[k]=tem;
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }


    return 0;
}