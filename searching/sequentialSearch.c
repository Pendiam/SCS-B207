#include <stdio.h>
int SequentialSearch(int key, int db[], size_t size)
{
    int index;
    for (index = 0; index < size; index++)
    {
        if (db[index] == key)
            return index;
    }
    return -1;
}

void main()
{
    int LA[] = {1, 3, 5, 7, 8};
    int item = 9;
    int size = sizeof LA / sizeof LA[0];
    printf("Found element %d at position %d\n", item, SequentialSearch(item, LA, size));
}