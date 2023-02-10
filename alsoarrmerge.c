#include <stdio.h>

void merge(int arr1[], int arr2[], int m, int n, int arr3[])
{
    int i = 0, j = 0, k = 0;

    while (i < m && j < n)
    {
        if (arr1[i] > arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }

    while (i < m)
        arr3[k++] = arr1[i++];

    while (j < n)
        arr3[k++] = arr2[j++];
}

int main()
{
    int arr1[] = {7,4,3,1};
    int arr2[] = { 8,6,5,2};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[m + n];

    merge(arr1, arr2, m, n, arr3);

    printf("The merged array is: \n");
    for (int i = 0; i < m + n; i++)
        printf("%d ", arr3[i]);

    return 0;
}