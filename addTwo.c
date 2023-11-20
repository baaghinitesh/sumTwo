// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
int i, j;
    
    // Loop through the array to find two numbers that add up to the target
    for (i = 0; i < numsSize; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                // Allocate memory for the result array
                int* result = (int*)malloc(2 * sizeof(int));
                
                // Update the result array with the indices of the two numbers
                result[0] = i;
                result[1] = j;

                // Update returnSize if necessary
                if (returnSize != NULL) {
                    returnSize[0] = 2;  // The size of the result array
                }

                return result;
            }
        }
    }

    // If no such pair is found, return NULL
    return NULL;
    
}