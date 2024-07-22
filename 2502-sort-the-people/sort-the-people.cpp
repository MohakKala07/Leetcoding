class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int,string> combine;
        int n=names.size();
        for(int i=0;i<n;i++)
        {
            combine[heights[i]]=names[i];
        }
        sort(heights.rbegin(),heights.rend());
        for(int i=0;i<n;i++)
        {
            names[i]=combine[heights[i]];
        }
        return names;
    }
};