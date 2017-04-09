int singleNumber(int* nums, int numsSize) 
{
    int result = 0 , i;
    for( i = 0; i < numsSize; i++)
    {
        result = result ^ nums[i];
    }
  return result;  
}