class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        int n = nums.size();
        vector<pair<int,int>> storePairs;
        vector<int> answer;
        for(int i=0;i<n;i++)
        {
            int mappedValue=0;
            int temp=nums[i];
            int place=1;
            if(temp==0)
            {
                storePairs.push_back({mapping[0],i});
                continue;
            }
            while(temp != 0)
            {
                mappedValue=place*mapping[temp%10]+mappedValue;
                place*=10;
                temp/=10;
            }
            storePairs.push_back({mappedValue,i});
        }
        sort(storePairs.begin(),storePairs.end());
        for(auto pair: storePairs)
        {
            answer.push_back(nums[pair.second]);
        }
        return answer;
    }
};