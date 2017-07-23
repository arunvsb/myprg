#include <stdio.h>
int main()
{
    int base, ex;

    long long result = 1;

    printf("Enter a base number: ");
    scanf("%d", &base);

    printf("Enter an ex: ");
    scanf("%d", &ex);

    while (ex != 0)
    {
        result *= base;
        --ex;
    }

    printf("Answer = %lld", result);

    return 0;
}
