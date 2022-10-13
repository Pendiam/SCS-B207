#include <stdio.h>
int BinarySearch(int key, int db[], size_t size)
{
    int low = 0, high = (size - 1), middle;
    while (low <= high)
    {
        middle = (low + high) / 2;
        if (db[middle] == key)
            return middle;
        else if (db[middle] < key)
            low = middle + 1;
        else
            high = middle - 1;
    }

    return -1;
}

void main()
{
    int LA[] = {1, 3, 5, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int item = 9;
    int size = sizeof LA / sizeof LA[0];
    printf("Found element %d at position %d\n", item, BinarySearch(item, LA, size));
}