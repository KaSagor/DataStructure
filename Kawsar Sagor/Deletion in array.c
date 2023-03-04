#include <stdio.h>
int main()
{
    int array[100], location, num, i;

    printf("Enter number of elements\n");
    scanf("%d", &num);

    printf("Enter %d elements\n", num);

    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }


    printf("Enter the location to delete element\n");
    scanf("%d", &location);

    if (location >= num+1)
    {
        printf("It is not possible to delete\n");
    }

    else
    {
        for (i = location - 1; i < num - 1; i++)
        {
            array[i] = array[i+1];
        }


        printf("Array of results:\n");

        for (i = 0; i < num - 1; i++)
        {
            printf("%d\n", array[i]);
        }

    }

    getch();
    return 0;
}
