//
// Created by colorcard on 2024/9/9.
//

#include <stdio.h>
#define max 64
void exchange(int *px,int *py);
void bubble(int a[],int n);

int main(){
    int i=0,j;
    int a[max];

   do {
        scanf("%d",&a[i]);
        i++;
    }while(getchar()!='\n');

    bubble(a,i);
    for(j=0;j<=i;j++){
        printf("%d ",a[j]);
    }


    return 0;
}

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