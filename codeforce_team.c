#include<stdio.h>

int main()
{
    int i,n,a,b,c,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if((a==1&&b==1&&c==1)||(a==1 && b==1)||(b==1 && c==1)||(c==1 && a==1)){
            sum = sum +1;
        }
    }
    printf("%d\n",sum);
}