
#include <stdio.h>

int main(){
    int i;
    double h,sum;

    scanf("%lf",&h);
    sum=-h;

    for(i=0;i<10;i++){
        sum=h*2+sum;
        h=h/2;
    }
    printf("%.4lf\n%.4lf",sum,h);

    return 0;
}