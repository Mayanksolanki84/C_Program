#include <stdio.h>

void main()
{
    // Initialize an array of integers
    int num[] = {30, 20, 40, 10, 50, 60};
    
    // Temporary variable to hold values during swapping
    int temp = 0;
    
    // Calculate the length of the array by dividing the total size of the array by the size of an element
    int n = sizeof(num) / sizeof(num[0]);

    // Outer loop to go through each element of the array
    for (int i = 0; i < n; i++)
    {
        // Inner loop to compare the current element with all subsequent elements
        for (int j = i + 1; j < n; j++)
        {
            // Swap if the current element is greater than the next element to sort in ascending order
            if (num[i] > num[j])
            {
                temp = num[i];   // Store the value of num[i] in temp
                num[i] = num[j]; // Assign the value of num[j] to num[i]
                num[j] = temp;   // Assign the stored value from temp to num[j]
            }
        }
        // Print the current element after the inner loop completes
        printf("%d\n", num[i]);
    }
}
