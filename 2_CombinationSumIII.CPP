class Solution {
public:
    void sol(int num, int k,int n,vector<vector<int>>&ans , vector<int>vec)
    {
        if(k==0 && n==0)
        {
          ans.push_back(vec);
          return ;
        }
        for(int i=num;i<10;i++)
        {
            if(i>num && i==num || num>n)
                return ;
            vec.push_back(i);
            sol(i+1,k-1,n-i,ans,vec);
            vec.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>vec;
        sol(1,k,n,ans,vec);
        return ans;
    }
};
