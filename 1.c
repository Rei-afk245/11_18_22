#include <stdio.h>
int main()
{
    int limiter;
    printf("Enter height: ");
    scanf("%d", &limiter);
    for (int x = 1; x <= limiter; x++)
    {
        for (int y = 1; y <= x; y++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}