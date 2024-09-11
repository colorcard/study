//
// Created by colorcard on 2024/9/11.
//

#include <stdio.h>

int main(){
    int a[8],b[8],i,j=0,sum[8];
    a[0]=0;
    b[0]=0;

    for(i=1;i<=7;i++){
        scanf("%d %d",&a[i],&b[i]);

        if(a[i]+b[i]>8){
            j++;
            sum[i]=a[i]+b[i];
        } else{
            sum[i]=0;
        }
    }

    if(j!=0){
        int index=0;
        for(i=1;i<=7;i++){
            if(sum[index]<sum[i]){
                index=i;
            }
        }
        printf("%d",index);
    } else{
        printf("0");
    }



    return 0;
}