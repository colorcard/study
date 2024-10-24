//
// Created by colorcard on 2024/9/11.
//

#include <stdio.h>

int main(){

    int a[5][5];
    int i,j,k;
    int t=0;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<5&&t<5;i++){
        for(j=0;j<5&&t<5;j++){
            t=0;
            for(k=0;(k<5)&&(t<5)&&(a[i][j] >= a[i][k] && a[i][j] <= a[k][j]);k++){
                t++;
            }
        }
    }





    if(t>=5){
        printf("%d %d %d",i-1,j-1,a[i-1][j-1]);
    } else{
        printf("not found");
    }

    return 0;
}