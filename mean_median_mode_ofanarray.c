// mean median mode of a given matrix
#include <stdio.h>
#include <stdlib.h>

int mean(int arr[], int n);
float median(int arr[], int n);
int mode(int arr[], int n);
void display(int arr[], int size);
int main()
{
    int arr[10], n = 10, c;
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n\n--------------------\nMean: %d", mean(arr, n));
    printf("\n\nMedian: %.2f", median(arr, n));
    printf("\n\nMode: %d\n--------------------", mode(arr, n));
    return 0;
}

// Funtion to calculate mean
int mean(int arr[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum / n;
}
// Funtion to calculate median
float median(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j] ^ arr[j + 1];
                arr[j + 1] = arr[j] ^ arr[j + 1];
                arr[j] = arr[j] ^ arr[j + 1];
            }
        }
    }
    //display(arr, n);
    if (n % 2 != 0)
        return (float)arr[n / 2];
    else
        return (float)(arr[(n - 1) / 2] + arr[n / 2]) / 2.0;
}
// Funtion to calculate mode
int mode(int arr[], int n)
{
    int maxValue = 0, maxCount = 0;

    for (int i = 0; i < n; ++i)
    {
        int count = 0;

        for (int j = 0; j < n; ++j)
        {
            if (arr[j] == arr[i])
                ++count;
        }

        if (count > maxCount)
        {
            maxCount = count;
            maxValue = arr[i];
        }
    }

    return maxValue;
}

void display(int arr[], int size)
{
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        if (i < size - 1)
            printf("| %d ", arr[i]);
        else
            printf("| %d |", arr[i]);
    }
}