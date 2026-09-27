/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    bool* output=malloc(candiesSize*sizeof(bool));
    int max=0;
    for(int i=0;i<candiesSize;i++)
    {
        if(candies[i]>max)
        {
            max=candies[i];
        }
    }
    for(int i=0;i<candiesSize;i++)
    {
        int richkid=candies[i]+extraCandies;
        if(richkid>=max)
        {
            output[i]=true;
        }
        else
        {
            output[i]=false;
        }
    }
    *returnSize=candiesSize;
    return output;
}