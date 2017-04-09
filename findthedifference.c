char findTheDifference(char* s, char* t) 
{
    int n = strlen(s);
    int arr[256] = {0};
    int i; 
    int j;
    for(i = 0; i < n; i++)
    {
        arr[s[i]]++ ;
    
    }
    for( j = 0; j <= n; j++)
    {
        if(arr[t[j]] == 0)
             break;
        else 
            arr[t[j]]--;
    }
return t[j];   
}