#include <stdio.h>
void getarray(int arr[])
{
    printf("Elements of array are : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[5] = {45, 67, 34, 78, 90};
    getarray(arr);
    return 0;
}