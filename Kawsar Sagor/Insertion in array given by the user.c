#include <stdio.h>

int main()
{
    int array[100], location, num, i, value;
    printf("Enter number of elements: ");
    scanf("%d", &num);

    printf("Enter %d elements\n", num);

    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }


    printf("Enter the location for insert an element\n");
    scanf("%d", &location);

    printf("Enter the value to insert\n");
    scanf("%d", &value);

    for (i = num - 1; i >= location - 1; i--)
    {
        array[i+1] = array[i];
    }

    array[location-1] = value;

    printf("Resultant array is\n");

    for (i = 0; i <= num; i++)
    {
        printf("%d\n", array[i]);
    }

    getch();
    return 0;
}
