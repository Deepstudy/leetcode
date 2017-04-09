void merge(int* nums1, int m, int* nums2, int n) {
    int k = m+n-1;
    int i = m-1;
    int j = n-1;
    for(k = m+n-1; k>=0; k--)
    {
        if((nums1[i] >= nums2[j]) && (i>=0))
        {
            nums1[k] = nums1[i];
            i--;
            
        }
        else if((nums1[i] < nums2[j]) && (j>=0))
        {
            nums1[k] = nums2[j];
            j--;
        }
        else if(i>=0)
        {
            nums1[k] = nums1[i];
            i--;
        }
        else if(j>=0)
        {
            nums1[k] = nums2[j];
            j--;
        }
    }
    
}