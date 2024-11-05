#include <stdio.h>

long long int gcd(long long int a,long long int b){
    return b==0?a:gcd(b,a%b);
}

int main()
{

    int T;
    scanf("%d",&T);
    while (T--)
    {
        int n;
        long long int TEM=9223372036854775807;
        scanf("%d",&n);
        long long int a[n];
        for (int i = 0; i < n; ++i)
        {
            scanf("%lld",&a[i]);
        }

        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                for (int k = j+1; k < n; ++k) {

                    long long int tem1=a[i]/gcd(a[i],a[j])*a[j];
                    long long int tem2=tem1/gcd(tem1,a[k])*a[k];

                    if(tem2<TEM){
                        TEM=tem2;
                    }


                }
            }
        }
        printf("%lld\n",TEM);

    }


    return 0;
}