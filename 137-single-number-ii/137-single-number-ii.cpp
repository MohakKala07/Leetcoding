class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        int result;
        unordered_map<int,int> mp;
        
        for(auto it:nums)
        {
            mp[it]++;
        }
        for(auto it:mp)
        {
            if(it.second==1)
            {
                result=it.first;
                break;
            }    
        }
        return result;
    }
};