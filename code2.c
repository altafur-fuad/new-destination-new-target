#include <stdio.h>

int main()
{
    int a, b, c;
    a = 5;

    b = a++;
    c = b*2;

    printf("B : %d \nC: %d", b, c);

    return 0;
}