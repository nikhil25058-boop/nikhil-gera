#include <stdio.h>
#include <time.h>

int main()
{
    int arr[100], n, key, i;
    int found = 0;

    clock_t start, end;
    double cpu_time_used;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    // Start Timer
    start = clock();

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            found = 1;
            break;
        }
    }

    // Stop Timer
    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    if(found)
        printf("\nElement found at index %d", i);
    else
        printf("\nElement not found");

    printf("\nExecution Time = %lf seconds", cpu_time_used);

    return 0;
}