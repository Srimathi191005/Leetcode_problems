/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
             int* memo = malloc(2 * sizeof(int));
            memo[0]=i;
            memo[1]=j;
            *returnSize = 2;
            return memo;
            }
        }
    }
     *returnSize =0;
     return NULL;
}