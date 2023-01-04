class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int original=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            original+=(nums[i]*i);
        }
        int maxi=original;
        for(int i=n-1;i>=0;i--)
        {
            original+=sum-(n*nums[i]);
            maxi=max(maxi,original);
        }
        return maxi;
    }
};
