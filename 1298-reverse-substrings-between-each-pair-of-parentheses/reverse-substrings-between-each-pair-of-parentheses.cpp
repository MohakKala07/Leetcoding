class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> str;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                str.push("(");
            }
            else if(s[i]==')')
            {
                string temp="";
                while(!str.empty() && str.top() != "(")
                {
                    temp=str.top()+temp;
                    str.pop();
                }
                if(!str.empty() && str.top()=="(")
                {
                    str.pop();
                }
                reverse(temp.begin(),temp.end());
                str.push(temp);
            }
            else
            {
                if(!str.empty() && str.top() != "(")
                {
                    str.top()+=s[i];
                }
                else
                {
                    str.push(string(1,s[i]));
                }
            }
        }
        string ans="";
        while(!str.empty())
        {
            ans=str.top()+ans;
            str.pop();
        }
        return ans;
    }
};