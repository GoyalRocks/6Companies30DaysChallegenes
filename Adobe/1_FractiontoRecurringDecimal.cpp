class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if(numerator == 0)
          return "0";
        string ans = "";
        if(numerator > 0 ^ denominator>0)
          ans+='-';
        long num = labs(numerator);
        long deno = labs(denominator);
        long quo = num/deno;
        long rem = num%deno;
          ans+=to_string(quo);
        if(rem==0)
          return ans;
        ans+='.';
        unordered_map<long,int>unmap;
        while(rem!=0)
        {
            if(unmap.find(rem)!=unmap.end())
            {
                int len = unmap[rem];
                ans.insert(len,"(");
                ans+=')';
                break;
            }
            else
            {
                unmap[rem] = ans.length();
                rem*=10;
                quo=rem/deno;
                rem = rem%deno;
                ans+=to_string(quo);
            }

        }
        return ans;
    }
};
