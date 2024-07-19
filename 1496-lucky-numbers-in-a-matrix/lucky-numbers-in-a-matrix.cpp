class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        vector<int> rowMin(r,INT_MAX);
        vector<int> colMax(c,INT_MIN);
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                rowMin[i]=min(rowMin[i],matrix[i][j]);
                colMax[j]=max(colMax[j],matrix[i][j]);
            }
        }
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    if(matrix[i][j]==rowMin[i] && matrix[i][j]==colMax[j])
                    {
                        return {matrix[i][j]};
                    }
                }
            }
            return {};
    }
};