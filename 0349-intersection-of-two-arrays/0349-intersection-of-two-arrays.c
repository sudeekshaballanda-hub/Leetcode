/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int* arr=malloc(nums1Size*(sizeof(int)));
    int count=0;

    for(int i=0;i<nums1Size;i++)
    {
        for(int j=0;j<nums2Size;j++)
        {
            
            if(nums1[i]==nums2[j])
            {
                int found=0;
                for(int k=0;k<count;k++)
                {
                    if(arr[k]==nums1[i])
                    {
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                   arr[count]=nums1[i];
                   count++;
                }
            break;
            }
        }

    }
    *returnSize=count;
    return arr;
}