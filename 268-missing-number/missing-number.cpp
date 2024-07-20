class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len=nums.size();
        sort(nums.begin(),nums.end());
        int i=0;
        for(i=0;i<len;i++)
        {
            if(nums[i]!=i)
            {
                return i;
            }
        }
        return i;
    }
};