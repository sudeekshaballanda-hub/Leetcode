/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int* output=malloc((right-left+1)*sizeof(int));
    int k=0;
    for(int i=left;i<=right;i++)
    {
        int temp=i;
        int valid=1;
        while(temp!=0)
        {
            int digit=temp%10;
            if(digit==0)
            {
                valid=0;
                break;
            }
            if(i%digit!=0)
            {
                valid=0;
                break;
            }
            temp=temp/10;
        }
        if(valid==1)
        {
            output[k]=i;
            k++;
        }
    }
    *returnSize=k;
    return output;
}