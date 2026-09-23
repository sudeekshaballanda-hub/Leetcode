int findMaxConsecutiveOnes(int* nums, int numsSize) {
 int current=0;
 int max=0;
 for(int i=0;i<numsSize;i++)
 {
    if(nums[i]==1)
    {
        current++;
        if(current>max)
        {
            max=current;
        }
    }
    else
    {
        current=0;
    }
 } 
 return max;  
}