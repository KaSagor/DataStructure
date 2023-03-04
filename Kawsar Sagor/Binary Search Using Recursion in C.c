#include <stdio.h>

void BinarySearch(int arr[],int num,int first,int last)
{

    int mid;

    if(first > last)
    {

        printf("Elements not found");

    }
    else
    {


        mid = (first + last)/2;


        if(arr[mid]==num)
        {

            printf("Element found at Index: %d ",mid);
            exit(0);

        }
        else if(arr[mid] > num)
        {

            BinarySearch(arr, num, first, mid-1);

        }
        else
        {

            BinarySearch(arr, num, mid+1, last);
        }
    }
}


void main()
{

    int arr[50],beg,mid,end,i,n,num;

    printf("Number of elements: ");
    scanf("%d",&n);

    printf("Enter %d sorted elements:\n",n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }


    beg=0;
    end=n-1;

    printf("Searching elements: ");
    scanf("%d",&num);

    BinarySearch(arr,num,beg,end);

}
