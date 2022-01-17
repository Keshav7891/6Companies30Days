class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& nums, int n, long long k) {
        if(k<=1)
        {
            return 0;   
        }
        
        int count=0;
        
        int left = 0;
        int right = 0;
        int product= 1;
        
        while(right<nums.size())
        {
            product*=nums[right];
            
            while(product>=k)
            {
                product/=nums[left];
                left++;
            }
            
            count+= right-left+1;
            
            right++;
        }
        
        return count;
    }
};