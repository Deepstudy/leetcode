int searchInsert(int* nums, int numsSize, int target) {
    
    int beg,end,mid;
beg = 0;
end = numsSize-1;

while(beg <= end){
    mid = (beg + end) / 2;
    if(nums[mid] == target)
        return mid;
    else if(nums[mid] > target)
        end = mid - 1;
    else
        beg = mid + 1;
}
return beg;
}