#include <stdio.h>
int main()
{
    int i, low, high, mid, n, key, array[100];
    printf("Number of elements: ");
    scanf("%d",&n);
    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Searching elements: ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    mid = (low+high)/2;
    while (low <= high)
    {
        if(array[mid] < key)
        {
            low = mid + 1;
        }

        else if (array[mid] == key)
        {
            printf("Elements found at Index %d", mid);
            break;
        }
        else
        {
            high = mid - 1;
        }

        mid = (low + high)/2;
    }
    if(low > high)
    {
        printf("Elements not found");
    }

    return 0;
}
