int main() {
    int n,*arr,sum = 0;    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    arr = (int *)malloc(n * sizeof(int));
    
    // Check if memory allocation was successful
    if (arr == NULL)
    {
        printf("Memory allocation failed!");
        return 1; // Exit with error
    }
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("Average of elements = %d\n", sum/n);
    free(arr);
    return 0;
}
