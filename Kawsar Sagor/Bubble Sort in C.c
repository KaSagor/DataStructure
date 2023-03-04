#include <stdio.h>
void bubblesort(int arr[], int size)
{
    int i, j;
    for (i = 0;  i < size; i++)
    {
        for (j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }

        }
    }
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int array[100], i, size;
    printf("Number of elements:  ");
    scanf("%d", &size);
    printf("Enter %d numbers :\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    bubblesort(array, size);
    printf("\nSorted list: \n");

    for (i = 0; i < size; i++)
    {
        printf(" %d ", array[i]);
    }

    return 0;

}
