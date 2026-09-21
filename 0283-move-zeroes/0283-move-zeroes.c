void moveZeroes(int* nums, int numsSize) {
    int interpos=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]!=0)
        {
            nums[interpos]=nums[i];
            interpos++;
        }
    }
    while(interpos<numsSize)
    {
        nums[interpos]=0;
        interpos++;
    }
}