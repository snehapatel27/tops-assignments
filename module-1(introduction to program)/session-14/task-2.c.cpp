#include <stdio.h>

// This function checks whether a number is even or not
int IsEven(int num)
{
    // If the number is divisible by 2, it is even
    if (num % 2 == 0)
    {
        return 1;   // Return 1 for true
    }
    else
    {
        return 0;   // Return 0 for false
    }
}

int main()
{
    // Store a number in the variable
    int num = 13;

    // Call the IsEven function and check the result
    if (IsEven(num))
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }

    return 0;
}
