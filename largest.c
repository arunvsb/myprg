#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the a value\n");
    scanf("%d",&a);
    printf("enter the b value\n");
    scanf("%d",&b);
    printf("enter the c value\n");
    scanf("%d",&c);
    if(a<b&&c<b)
    {
        printf("b is greater");
    
    }
    else if(a<c&&b<c)
    {
        printf("c is greater");
    }
    else
    {
        printf("a is greater");
    }
    return 0;
}
