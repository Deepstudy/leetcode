// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

int firstBadVersion(int n)
{
    int low = 0;
    int high = n;
    while(low <= high)
    {
        int mid = low + (high-low)/2;
        if((isBadVersion(mid) == 1 ) && (isBadVersion(mid-1) ==0))
        return mid;
        else if( isBadVersion(mid) == 0)
        {
            low = mid+1;
        }
        else 
        {
            high = mid-1;
        }
        
    }
  return -1;  
}