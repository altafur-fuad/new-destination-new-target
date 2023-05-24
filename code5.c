#include <stdio.h>
#include <string.h>

int main ()
{
    char word[80], revers_word[80];
    int i, j, len;

    scanf("%s", word);

    len = strlen(word);

    for(i=0, j = len - 1; i < len; i++, j--)
    {
        revers_word[i]=word[j];
    }

    revers_word[i]='\0';
    printf("%s\n", revers_word);

    if (0 == strcmp(word, revers_word)){
        printf("%s is a palindrome.\n", word);
    }
    else{
        printf("%s is not a palindrome. \n", word);
    }
    return 0;
}