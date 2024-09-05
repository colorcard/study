#include <math.h>
#include <stdio.h>

int main() {
    double x1,y1,x2,y2,x3,y3,s,per,p,a,b,c;

    printf("请输入第一个点的坐标：\n");
    scanf("%lf,%lf",&x1,&y1);
    printf("请输入第二个点的坐标：\n");
    scanf("%lf,%lf",&x2,&y2);
    printf("请输入第三个点的坐标：\n");
    scanf("%lf,%lf",&x3,&y3);

    a=sqrt(pow(x1,2)+pow(y1,2)+pow(x2,2)+pow(y2,2));
    b=sqrt(pow(x1,2)+pow(y1,2)+pow(x3,2)+pow(y3,2));
    c=sqrt(pow(x3,2)+pow(y3,2)+pow(x2,2)+pow(y2,2));

    per=a+b+c;
    p=per/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));

    printf("三角形的周长为%g，面积为%g.",per,s);


    return 0;
}