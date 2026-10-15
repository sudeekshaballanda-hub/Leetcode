int maxSubArray(int* nums, int numsSize) {
    int currsum=nums[0];
    int maxsum=nums[0];
    for(int i=1;i<numsSize;i++)
    {
        if(currsum<0)
        {
            currsum=0;
        }
        currsum+=nums[i];
        if(currsum>maxsum)
        {
            maxsum=currsum;
        }
    }
    return maxsum;
}