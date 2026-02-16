//TO FIND GREATEST OF THREE NUMBERS

#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    if( a==b && b==c)
    printf("ALL THE NUMBER ARE SAME : %d", a);

    else if ( a>=b && a>=c)
    printf("a is greatest %d", a);

    else if ( b>=a && b>=c)
    printf("b is greatest %d", b);

    else if ( c>=a && c>=b)
    printf("c is greatest %d", c);

    return 0;
}
