//
// Created by colorcard on 24-11-11.
//

void exchange(int *px,int *py){
    int tem;
    tem=*px;
    *px=*py;
    *py=tem;
}

void bubble(int a[],int n){
    int i,j;
    for(i=1;i<n;i++){
        for(j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                exchange(&a[j],&a[j+1]);
            }
        }
    }
}

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];

    int index;
    scanf("%d",&index);

    for (int i = 0; i < n; ++i) {
        scanf("%d",&a[i]);
    }

    bubble(a,n);

    for (int i = 0; i < n; ++i) {
        if(a[i]==a[i+1]){
            for (int j = i; j < n-1; ++j) {
                a[j]=a[j+1];
            }
            n--;
        }
    }


    if(index>n){
        printf("NO RESULT");
    }else{
        printf("%d",a[index-1]);
    }


    return 0;
}