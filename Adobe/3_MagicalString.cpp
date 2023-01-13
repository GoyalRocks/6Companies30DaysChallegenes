class Solution {
public:
    int magicalString(int n) {
        if(n<=2)
          return 1;
        string ans="122";
        int i=2,end=2;
        while(ans.size()<n)
        {
            if(ans[i]=='1')
            {
                if(ans[end]=='2')
                  ans.push_back('1');
                else 
                  ans.push_back('2');
            }
            else
            {
                if(ans[end]=='2')
                  ans+="11";
                else
                  ans+="22";
            }
            i++;
            end=ans.size()-1;
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(ans[i]=='1')
              count++;
        }
        return count;
    }
};
