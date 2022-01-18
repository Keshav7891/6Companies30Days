int minSubArrayLen(int target, vector<int>& nums) 
    {
        int res=INT_MAX;;
        int left=0;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            while(sum >= target)
            {
                res=min(res,i-left+1);
                sum=sum-nums[left];
                left++;
            }
        }
        if(res==INT_MAX)
        {
            return 0;
        }
        else
        {
            return res;
        }
    }
