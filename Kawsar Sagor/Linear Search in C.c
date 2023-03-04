#include<stdio.h>
int main()
{
    int array[100],size,i,num;
    printf("Number of elements: ");
    scanf("%d",&size);

    printf("Enter %d elements:\n",size);
    for(i=0; i<size; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("\nEnter searching elements: ");
    scanf("%d",&num);

    for(i=0; i<size; i++)
    {
        if(array[i]== num)
        {
            break;
        }

    }

    if(i<size)
    {
        printf("Element found at index %d",i);
    }

    else
    {
        printf("Element not found");
    }

    return 0;
}
