class Solution {
public:
    string getHint(string secret, string guess) {
        int bull=0,cows=0;
        unordered_map<char,int>m;
        for(int i=0;i<secret.size();i++)
        {
            if(secret[i]==guess[i])
              bull++;
            else
                m[secret[i]]++;
        }
        for(int i=0;i<secret.size();i++)
        {
            if(secret[i]==guess[i])
              continue;
            else if(m[guess[i]])
            {
                m[guess[i]]--;
                cows++;
            }
        }
        string ans = "";
        ans+=to_string(bull);
        ans+='A';
        ans+=to_string(cows);
        ans+='B';
        return ans;
    }
};
