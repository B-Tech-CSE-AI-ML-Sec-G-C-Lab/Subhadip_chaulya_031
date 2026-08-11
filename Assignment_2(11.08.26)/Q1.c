/*
Count total number of duplicate elements in an array
*/
#include <stdio.h>

int countDuplicates(int arr[], int n)
{
    int i, j, count = 0;

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }

    return count;
}

int main()
{
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Total duplicate elements = %d", countDuplicates(arr, n));

    return 0;
}