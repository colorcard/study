//
// Created by colorcard on 24-11-11.
//


#include <stdio.h>

int main(){
    int T,sum=0;
    scanf("%d",&T);

    while(T--){
        int n;
        scanf("%d",&n);

       for(int i=0;n!=0;i++){
           if(n>=100){
               sum+=n/100;
               n=n%100;
           }else if(n>=50&&n<100){
               sum+=n/50;
               n=n%50;
           }else if(n>=10&&n<50){
               sum+=n/10;
               n=n%10;
           }else if(n>=5&&n<10){
               sum+=n/5;
               n=n%5;
           }else if(n>=2&&n<5){
               sum+=n/2;
               n=n%2;
           }else if(n>=1&&n<2){
               sum+=n/1;
               n=n%1;
           }
       }


    }
    printf("%d\n",sum);


    return 0;
}