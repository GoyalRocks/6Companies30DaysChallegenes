class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long>num;
        for(auto t: tokens)
        {
            if(t!= "+" and t!="-" and t!="*" and t!="/")
               num.push(stoi(t));
            else
            {
                long long int1=num.top();
                num.pop();
                long long int2=num.top();
                num.pop();
                long long int3;
                if(t=="+")
                  int3=int1+int2;
                else if(t=="-")
                  int3 = int2-int1;
                else if(t=="*")
                  int3 = int1*int2;
                else if(t=="/")
                  int3 = int2/int1;
                num.push(int3);
            }
        }
        return (int)num.top();
    }
};
