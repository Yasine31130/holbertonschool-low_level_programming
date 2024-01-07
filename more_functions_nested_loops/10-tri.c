#include <stdlib.h>
#include <stdio.h>
void print_triangle(int size)
{
    int i = 0;
    int r = 0;
    
    if (size > 0)
    {
        int k = size - 1;
        while (i < size)
        {
            while (r < size)
            {
                if (r < k)
                {
                    putchar(' ');
                }
                else 
                {
                    putchar('#');
                }
                r++;
            }
            i++;
            k--;
            putchar('\n');
        }
    }
    else 
    {
        putchar('\n');
    }
}
