#include <stdio.h>
void main()
{
    int LA[] = {1, 3, 5, 7, 8};
    int item = 10, n = 5, k = 3;
    int i, j;
    printf("The original array elements are :\n");
    for (i = 0; i < n; i++)
    {
        printf("LA[%d] = %d \n", i, LA[i]);
    }
    LA[k - 1] = item;
    printf("The array elemets after updation :\n");
    for (i = 0; i < n; i++)
    {
        printf("LA[%d] = %d \n", i, LA[i]);
    }
}