//
// Created by colorcard on 24-11-6.
//
#include <stdio.h>

int gcd(int x,int y){
    return y>0 ? gcd (y,x%y) : x;
}

int main()
{
    int T,n,k;
    scanf("%d",&T);
    while ( T --)
    {
        scanf("%d %d",&n,&k);
        if (gcd(n,k+1) == 1)    puts("Yes");
        else                    puts("No");
    }
    return 0;
}