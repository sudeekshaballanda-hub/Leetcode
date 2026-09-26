int findNumbers(int* nums, int numsSize) {
    int evencount=0;
    for(int i=0;i<numsSize;i++)
    {
        int count=0;
        while(nums[i]!=0)
        {
            int digit=nums[i]%10;
            count++;
            nums[i]=nums[i]/10;
        }
        if(count%2==0)
        {
            evencount++;
        }
    }
    return evencount;
}