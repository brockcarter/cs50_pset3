/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include <stdio.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    int first, last, middle;
    first = 0;
    last = n-1;
    
    while(first <= last)
    {
        middle = (first+last)/2;
        if(values[middle] < value)
        {
            first = middle + 1;
        }
        else if(values[middle] == value)
        {
            return true;
            break;
        }
        else if(values[middle] > value)
        {
            last = middle - 1;
        }   
    }
    return false;
}    
    //for (int i=0; i<n; i++)
    //{
    //    if (values[i] == value)
    //    {
    //     return true;   
    //    }
    //}
    //return false;

/**
 * Sorts array of n values.
 */

int swap, d;
void sort(int values[], int n)
{
    for (int c = 0; c < n; c++)
    {
        int position = c;
        for(d = c + 1; d < n; d++)
        {
            if(values[position] > values[d])
            position = d;
        }
        if(position != c)
        {
            swap = values[c];
            values [c] = values[position];
            values[position] = swap;
        }
    }
}    
    

    /**{
        int c=i;
        while (c>0 && values[c] > values[c-1])
        {
            int d = values[c];
            values[c]=values[c-1];
            values[c-1]=d;
            c--;
        }
    }
    */
    
    /** printf("Sorted haystack: \n");
    for (int i=0; i<n; i++) 
    {
        printf("%i\n", values[i]);    
    }
    */