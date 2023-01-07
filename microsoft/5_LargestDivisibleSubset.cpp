class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        if(nums.size()==0)
          return nums;
        sort(nums.begin(),nums.end());
        int flag=1;
        if(nums[0]==1)
          flag=0;
        else
        {
            nums.push_back(1);
            flag=1;
        }
        sort(nums.begin(),nums.end());
        int i,j;
        int vec[nums.size()][2];
        for(i=nums.size()-1;i>=0;i--)
        {
            vec[i][0]=0;
            vec[i][1]=i;
            for(j=i+1;j<nums.size();j++)
            {
                if(nums[j]%nums[i]==0)
                {
                    if(vec[j][0]>vec[i][0])
                    {
                        vec[i][0]=vec[j][0];
                        vec[i][1]=j;
                    }
                }
            }
            vec[i][0]++;
        }
        i=0;
        vector<int>t;
        t.push_back(nums[i]);
        while(vec[i][1]!=i)
        {
            i=vec[i][1];
            t.push_back(nums[i]);
        }
        if(flag==1)
          t.erase(t.begin());
        return t;  
    }
};
