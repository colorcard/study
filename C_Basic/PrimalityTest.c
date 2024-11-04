//
// Created by colorcard on 2024/9/6.
//

#include <stdio.h>
#include <math.h>

int isPri(int n){
    int i;
    if(n<=1){
        return 0;
    }
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n,i;

    scanf("%d",&n);

    if(n<=1){
        printf("No");
    }
    else{
        if(isPri(n)){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }

    return 0;
}