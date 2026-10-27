/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int* output=malloc(numsSize*sizeof(int));

    for(int i=0;i<numsSize;i++)
    {
        output[i]=nums[i]*nums[i];
    }

    int min=output[0];
    for(int i=0;i<numsSize-1;i++)
    {
        for(int j=0;j<numsSize-1-i;j++)
        {
            if(output[j]>output[j+1])
            {
                int temp=output[j];
                output[j]=output[j+1];
                output[j+1]=temp;
            }
        }
    }
    *returnSize=numsSize;
    return output;
}