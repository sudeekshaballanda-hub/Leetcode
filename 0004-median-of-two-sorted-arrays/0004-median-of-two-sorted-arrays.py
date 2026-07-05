class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        if len(nums1)>len(nums2):
            nums1,nums2=nums2,nums1
        m,n=len(nums1),len(nums2)
        total=m+n
        half=total//2

        left,right=0,m

        while left<=right:
            mid1=(left+right)//2
            mid2=half-mid1

            left1 = nums1[mid1 - 1] if mid1 > 0 else float('-inf')
            left2 = nums2[mid2 - 1] if mid2 > 0 else float('-inf')
            
            right1 = nums1[mid1] if mid1 < m else float('inf')
            right2 = nums2[mid2] if mid2 < n else float('inf')
            
            if left1 <= right2 and left2 <= right1:
                
                if total % 2 == 1:  # Odd total length
                    return min(right1, right2)
                else:  # Even total length
                    return (max(left1, left2) + min(right1, right2)) / 2.0
            elif left1 > right2:
                
                right = mid1 - 1
            else:
                
                left = mid1 + 1
        
        return 0.0 
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        