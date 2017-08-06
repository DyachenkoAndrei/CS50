/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    int middle, high = n-1, low = 0;
    if (n <= 0)
    {
        return false;
    }    
        while (low <= high)
        {
            middle = (high + low)/2;
            if (value > values[middle])
            {
                low = middle + 1;
             }
            if (value < values[middle])
            {
                high = middle - 1;
            }
            if (value == values[middle])
            {
                return true;
            }
        
        }
    return false;   
    
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement a sorting algorithm
    int min;
    for (int i = 0; i < n - 2; i++)
    {
        min = i;
        if (values[min] > values[i])
        {
            values[min] = values[i];
        }
    }
    return;
}
