#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000];
    int i=0;
    scanf("%s",s);
    int ln = strlen(s);
    if(s[i]>='a'&& s[i]<='z')
    {
        printf("%c",s[i]-32);
    }
    else
    {
        printf("%c",s[i]);
    }
    for(i=1;i<ln;i++){
        printf("%c",s[i]);
    }
    return 0;
}