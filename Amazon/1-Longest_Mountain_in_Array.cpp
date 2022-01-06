class Solution {
public:
    int longestMountain(vector<int>& nums) 
    {
        int n=nums.size(),j,res=0,c;
        for(int i=1;i<=n-2;)
        {
            c=1;
            j=i;
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1])
            {
                while(j>0 && nums[j]>nums[j-1])
                {
                    j--;
                    c++;
                }
                while(i<n-1 && nums[i]>nums[i+1])
                {
                    i++;
                    c++;
                }
                res=max(res,c);
            }
            else
            {
                i++;
            }
        }
        return res;
    }
};