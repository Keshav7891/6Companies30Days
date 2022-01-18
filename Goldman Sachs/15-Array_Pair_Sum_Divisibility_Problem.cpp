bool canPair(vector<int> arr, int k) 
{
        unordered_map<int,int>m;
        for(auto key : arr)
        {
            int rem=((key%k)+k)%k;
            m[rem]++;
        }
        for(int i=0;i<k;i++)
        {
            //if remainder is 0 so pair should be even 
            if(i==0)
            {
                if(m[i]%2!=0)
                {
                    return false;
                }
                continue;
            }
            if(m[i]!=m[k-i])
            {
                return false;
            }
        }
        return true;
 }
