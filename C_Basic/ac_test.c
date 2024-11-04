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
    int T;
    scanf("%d",&T);
    while(T--){
        int n,flag=0;
        scanf("%d",&n);

        for (int i = 2; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                if(i*j==n&&isPri(i)&&isPri(j)){
                    printf("Yes\n");
                    flag=1;
                    continue;
                }
            }
        }
        if(flag!=1) printf("No\n");

    }


    return 0;
}