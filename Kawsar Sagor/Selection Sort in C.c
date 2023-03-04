#include <stdio.h>
void selectionSort(int arr[], int size);
void swap(int *a, int *b);
/*
 * Selection sort function
 */
void selectionSort(int arr[], int size)
{
    int i, j;
    for (i = 0 ;  i < size; i++)
    {
        for (j = i ; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(&arr[i], &arr[j]);
            }

        }
    }
}

/* Function to swap two variables */
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

/*
 * Main Function
 */
int main()
{
    int array[10], i, size;
    printf("Number of elements:  ");
    scanf("%d", &size);
    printf("Enter %d numbers\t", size);
    printf("\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    selectionSort(array, size);

    printf("\nSorted list: ");
    for (i = 0; i < size; i++)
    {
        printf(" %d ", array[i]);
    }

    return 0;
}
