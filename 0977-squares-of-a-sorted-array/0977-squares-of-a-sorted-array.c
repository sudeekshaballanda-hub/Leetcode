/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int* output=malloc(numsSize*sizeof(int));
    *returnSize=numsSize;
    int left=0;
    int right=numsSize-1;
    int k=numsSize-1;
    while(left<=right)
    {
        int leftSquare=nums[left]*nums[left];
        int rightSquare=nums[right]*nums[right];

        if(leftSquare>rightSquare)
        {
            output[k]=leftSquare;
            left++;
        }
        else
        {
            output[k]=rightSquare;
            right--;
        }
        k--;
    }
    return output;
}