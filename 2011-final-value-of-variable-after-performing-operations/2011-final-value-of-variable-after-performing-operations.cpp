class Solution {
public:
    int finalValueAfterOperations(vector<string>& op)
    {
        int x = 0;
        int len = op.size();
        for(int i = 0; i < len; i++)
        {
            if(op[i][0]=='+' || op[i][1]=='+')
                x++;
            else
                x--;
        }
        return x;
    }
};