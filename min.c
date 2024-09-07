//
// Created by colorcard on 2024/9/7.
//

#include <stdio.h>
#define max 10

int main(){
    int i,n,index;
    int a[max];

    printf("Enter n:\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    index=0;
    for(i=1;i<n;i++){
        if(a[i]<a[index]){
            index=i;
        }
    }//求最小值

    printf("最小值为%d，其角标为%d。\n",a[index],index);

    int temp;
    temp=a[index];
    a[index]=a[0];
    a[0]=temp;

    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }

    return 0;
}