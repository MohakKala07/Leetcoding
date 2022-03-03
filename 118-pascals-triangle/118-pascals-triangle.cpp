class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        int i,j,ret;
        vector<vector<int>>pascal;
        for(i=0;i<numRows;i++)
        {
            vector<int>rows(i+1,1);
            for(j=1;j<i;j++)
            {
                rows[j]=pascal[i-1][j]+pascal[i-1][j-1];
            }
            pascal.push_back(rows);
        }
        
        return pascal;
    }
};