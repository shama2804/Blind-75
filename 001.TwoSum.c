#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    *returnSize = 2;  
    int* result = (int*)malloc(*returnSize * sizeof(int)); 

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) 
        {
            if (nums[i] + nums[j] == target) 
            {
                result[0] = i;  
                result[1] = j;  
                return result;  
            }
        }
    }
    free(result);
    return NULL;
}

int main() {
    int n, target;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int nums[n]; 
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &nums[i]);
    }
    printf("Enter the target value: ");
    scanf("%d", &target);
    int returnSize;
    int* result = twoSum(nums, n, target, &returnSize);

    if (result != NULL) {
        printf("Indices: [%d, %d]\n", result[0], result[1]);
        free(result);  
    } 
    else 
    {
        printf("No solution found.\n");
    }

    return 0;
}

/*
Enter the number of elements in the array: 5
Enter the elements of the array: 
2 4 6 8 10
Enter the target value: 18
Indices: [3, 4]
  */
