class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> nums, int n, int k)
    {
        vector<int>res;
        deque<int>dq;
        for(int i=0;i<n;i++)
        {
            while(dq.empty()==false && dq.front() <= i - k)
            {
                dq.pop_front();
            }
            while(dq.empty()==false && nums[i]>=nums[dq.back()])
            {
                dq.pop_back();
            }
            dq.push_back(i);
            if(i>=k-1)
            {
                res.push_back(nums[dq.front()]);   
            }
        }
        return res;
    }
};

