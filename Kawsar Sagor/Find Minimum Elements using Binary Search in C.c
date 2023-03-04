#include<stdio.h>
void Bmin(int *a, int i, int n)
{
    int j, temp;
    temp = a[i];
    j = 2 * i;
    while (j <= n)
    {
        if (j < n && a[j+1] > a[j])
        {
            j = j + 1;
        }
        if (temp < a[j])
        {
            break;
        }

        else if (temp >= a[j])
        {
            a[j / 2] = a[j];
            j = 2 * j;
        }
    }
    a[j/2] = temp;
    return;
}
int binarysearchmin(int *a,int n)
{
    int i;
    for(i = n/2; i >= 1; i--)
    {
        Bmin(a,i,n);
    }
    return a[1];
}
int main()
{
    int n, i, x, min;
    int a[20];
    printf("No of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    min = binarysearchmin(a, n);
    printf("\minimum element in an array is : %d", min);
    return 0;
}
