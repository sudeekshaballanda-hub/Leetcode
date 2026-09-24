int pivotIndex(int* nums, int numsSize) {
    int left=0;
    int sum=0;
    for(int i=0;i<numsSize;i++)
    {
        sum+=nums[i];
    }
    for(int i=0;i<numsSize;i++)
    {
        int right=sum-left-nums[i];
        if(left==right)
        {
            return i;
        }
        left+=nums[i];
    }
    return -1;
}