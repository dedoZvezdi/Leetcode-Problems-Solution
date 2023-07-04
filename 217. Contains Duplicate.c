#include <stdio.h>
#include <stdbool.h>

bool containsDuplicate(int* nums, int numsSize)
{
    bool a = true;
    bool b = false;
    for(int i = 0; i < numsSize; i++)
    {
        for(int j = i + 1; j<numsSize; j++)
        {
            if (nums[i] == nums[j])
            {
                return a;
            }
        }   
    }
    return b;
}