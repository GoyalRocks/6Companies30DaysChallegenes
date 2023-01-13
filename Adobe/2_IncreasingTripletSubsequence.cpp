class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int len = nums.size();
        if(len<3)
         return false;
        int small=INT_MAX;
        int big=INT_MAX;
        for(int i=0;i<len;i++)
        {
            if(nums[i]>big)
              return true;
            else if(nums[i]>small && nums[i]<big)
              big=nums[i];
            else if(nums[i]<small)
              small = nums[i];
        }
        return false;
    }
};
