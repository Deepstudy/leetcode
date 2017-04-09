int majorityElement(int* nums, int numsSize)
{
 int i;
 int maje = 0;
 int count = 1;
 for(i = 1; i < numsSize; i++)
 { 
      if(nums[i] == nums[maje])
      count++;
      else
      count--;
      if(count == 0)
       {
        maje=i;
        count=1;
       }
  }
 int j, e ;
 int occ=0;
 for(j = 0; j < numsSize; j++)
  {
      if(nums[j] == nums[maje] )
       occ++;
  }     
      if(occ > (numsSize/2))
       e = nums[maje];
  
  return e;
}