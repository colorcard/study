#include<stdio.h>
#include<string.h>

char a[1011],a1[1012];

void gao(int sz, int pos, char ch) {
    int i, j = 0;
    for (i = 0; i < pos; i++, j++) {
        a1[j] = a[i];
    }
    a1[j++] = ch; //在pos位置插入字符
    for (; i < sz; i++, j++) {
        a1[j] = a[i];
    }
    a1[j] = 0; // 设置字符串结束符
}
int ok(char *s, int len) {
    int i = 0, j = len - 1;
    while (i < j) {
        if (s[i] != s[j]) {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main()
{
    while(scanf("%s",a)!=EOF)
    {
        int len=strlen(a);
        int cnt=0;
        for(int i=0;i<=len;i++)
        {
            for(char c='a';c<='z';c++)
            {
                gao(len,i,c);
                if(ok(a1,len+1)){
                    cnt++;
                    break;
                }

            }
        }
        printf("%d\n",cnt);
    }
}