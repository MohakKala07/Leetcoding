class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        int len=nums.size();
        for(int i=1;i<len;i+=3)
        {
            if(nums[i]!=nums[i-1])
                return nums[i-1];
        }
        return (nums[len-1]);
    }
};