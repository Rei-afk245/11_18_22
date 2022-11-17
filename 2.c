#include <stdio.h>
int main()
{
    int height;
    printf("Enter height: ");
    scanf("%d", &height);
    if (height % 2 != 0)
    {
        for (int x = 1; x <= height / 2 + 1; x++)
        {
            for (int y = 1; y <= x; y++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
    {
        for (int x = 1; x <= height / 2; x++)
        {
            for (int y = 1; y <= x; y++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    for (int x = height / 2; x > 0; x--)
    {
        for (int y = x; y > 0; y--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}