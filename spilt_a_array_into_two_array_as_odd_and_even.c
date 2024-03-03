#include <stdio.h>
int main()
{
    int arr[6];
    int odd[6], even[6];
    int i, j = 0, k = 0;
    printf("Enter array elements:\n");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 6; i++)
    {
        if (arr[i] % 2 != 0)
        {
            odd[j] = arr[i];
            j++;
        }
        else
        {
            even[k] = arr[i];
            k++;
        }
    }
    printf("Odd array:\t");
    for (i = 0; i < j; i++)
    {
        printf("%d\t", odd[i]);
    }
    printf("Even array:\t");
    for (i = 0; i < k; i++)
    {
        printf("%d\t", even[i]);
    }

    return 0;
}