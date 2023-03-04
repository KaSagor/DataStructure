#include <stdio.h>
int RecursiveLS(int arr[], int value, int index, int n)
{
    int pos = 0;

    if(index >= n)
    {
        return 0;
    }

    else if (arr[index] == value)
    {
        pos = index;
        return pos;
    }

    else
    {
        return RecursiveLS(arr, value, index+1, n);
    }
    return pos;
}

int main()
{
    int n, value, pos, m = 0, arr[100];
    printf("Number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Search elements: ");
    scanf("%d", &value);

    pos =  RecursiveLS(arr, value, 0, n);
    if (pos != 0)
    {
        printf("Element found at index %d ", pos);
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}
