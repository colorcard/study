//
// Created by colorcard on 24-11-11.
//

#include <stdio.h>

int main(){
    int x,n;
    int sum = 0;
    scanf("%d %d",&x,&n);

    for (int i=0; i<n;i++) {
        if (x!=6 && x!=7) {
            sum+=250;
        }
        x++;
        if (x==8) {
            x=1;
        }
    }

    printf("%d",sum);




    return 0;
}