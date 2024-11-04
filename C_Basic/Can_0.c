//
// Created by colorcard on 24-11-4.
//


#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a,const void *b) {
    return *(int*)a-*(int*)b;
}

int main(){
    int T;
    scanf("%d",&T);
    while (T--){
        int a[3]={0};
        scanf("%d%d%d",&a[0],&a[1],&a[2]);


        qsort(a, 3, sizeof(int),cmp );
//        for (int i = 0; i < 3; ++i) {
//            for (int j = 0; j < 3-i; ++j) {
//                if(a[j]>a[j+1]){
//                    int tem=a[j];
//                    a[j]=a[j+1];
//                    a[j+1]=tem;
//                }
//            }
//        }//排序

        if(a[0]+a[1]-a[2]==0||a[0]*a[1]-a[2]==0){
            printf("Yes\n");
        } else{
            printf("No\n");
        }
    }

    return 0;
}