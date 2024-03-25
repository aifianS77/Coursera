#include <stdio.h>
// this code is based on the fibonacci code in wikipedia 
// the formula give in the wikipedia 
// F0 = 0; F1 = 1;
// for the next sequence is 
// Fn = Fn-1 + Fn-2;
// The task is to compute and display the first 6 digits in the Fibonnaci sequence
int main()
{
    int Fn;       // Fibonnaci sequence for number, n
    
    int Fn_1 = 1; // Initialize Fn-1 to the first Fibonacci number since the F1 = 1
    int Fn_2 = 0; // Initialize Fn-2 to the second Fibonacci number since the F0 = 0
    
    printf("First 6 digits of Fibonacci sequence:\n");
    
    //increment by one, from 0 to 5 to display the first 6 
    for (int i = 0; i <6; i++) {
        if (i <= 1) {
            Fn = i; // Fibonacci sequence starts with 0 and 1
        } else {
            Fn = Fn_1 + Fn_2; // Calculate next Fibonacci number
            // when update, need to update Fn-2 first, or else bug 
            Fn_2 = Fn_1;   // Update Fn_1 to the latest Fn to calculate the next Fn
            Fn_1 = Fn; // Update Fn_2 to the Fn-1 
        }
        printf("Fibonacci sequence index n=%d: %d\n", i, Fn); // Print both i and Fn;
    }
}