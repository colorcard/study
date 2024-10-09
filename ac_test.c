#include "stdio.h"

int main(){
    int n,i,index=0,sum=0,a,avr;
    printf("输入n：");
    scanf("%d",&n);

    for(i=0;i<n;i++){

        scanf("%d",&a);

        if(a<60){
            index++;
        }

        sum=sum+a;

        return 0;
    }

    avr=sum/n;

    printf("平均分：%d\n不及格人数：%d",avr,index);


}