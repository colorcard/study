//
// Created by colorcard on 2024/9/7.
//

#include <stdio.h>

int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int low=0,high=9,mid,n;

    printf("请输入你需要查找的数：\n");
    scanf("%d",&n);

    mid=(low+high)/2;

    while(a[mid]!=n){

        if(n<a[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        mid=(low+high)/2;
    }

    printf("你要找的数字角标为：%d。",mid);



    return 0;
}