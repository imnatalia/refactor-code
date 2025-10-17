#include <stdio.h>
#include <stdlib.h>

int recursive(int number)
{
    if(number == 0)
    {
        return 0;
    }
    return (number + recursive(number - 1));
}

int iterative(int number)
{
    int sum = 0, i;
    for(i = number; i > 0; i--)
    {
        sum += i;
    }
    return sum;
}