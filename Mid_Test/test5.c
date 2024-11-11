//
// Created by colorcard on 24-11-11.
//

#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int a[N];
    a[0]=0;


    for (int i = 0; i <N; ++i) {
        a[i]=i+1;
    }

    int num=1;
    int cur=N;
    int s=N;

    while(s>1){
        if(a[cur]!=0){
            num++;
            if(num==3){
                a[cur]=0;
                s--;
                num=1;
            }
        }
        cur=(cur+1)%N;
    }


    for (int i = 0; i < N; ++i) {
        if(a[i]!=0){
            printf("%d",a[i]);
        }
    }



    return 0;
}