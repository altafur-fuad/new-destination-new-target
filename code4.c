#include <stdio.h>
#include <ctype.h>

int main()
{
    int n, i;
    char x[6000];
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%s", &x);
        int l = strlen(x);

        l > 10 ? printf("%c%d%c\n",x[0],l-2,x[l-1]) : printf("%s\n",x);
     }
     return 0;
}