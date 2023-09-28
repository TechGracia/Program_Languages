#include<stdio.h>
# define n 10
void bubbleSort(int arr[],int nn) 
{
    for (int i = 0; i < nn - 1; i++) 
    {
        for (int j = 0; j < nn - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1])
            {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[n];
    printf("ENTER NUMBERS:\n");
    for (int i = 0; i < n; i++)
    scanf("%d",& arr[i]);
    printf("UNSORTED ARRAY: ");
    for (int i = 0; i < n; i++)
    
        printf("%5d",arr[i]);
    
    bubbleSort(arr, n);
    printf("\nSORTED ARRAY: ");
    for (int i = 0; i < n; i++)
    printf("%5d",arr[i]);
    printf("\n");
    return 0;
}
   


    