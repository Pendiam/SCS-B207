#include <stdio.h>
void main()
{
    int LA[] = {1, 3, 5, 7, 8};
    int n = 5;
    int i;
    printf("The original array elements are :\n");
    for (i = 0; i < n; i++)
    {
        printf("LA[%d] = %d \n", i, LA[i]);
    }
}