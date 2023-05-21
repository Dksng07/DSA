class Solution {
public:
    string removeOuterParentheses(string s) {
        string str;
        int count = 0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                count++;
            }
            else
            {
                count--;
            }
            if((s[i]=='(' && count==1) || (s[i]==')'&& count==0))
            {
                continue;
            }
            str.push_back(s[i]);
        }
        return str;
    }
};