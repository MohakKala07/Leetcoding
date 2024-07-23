class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int c=0;
        int n=hours.size();
        for(int i : hours)
        {
            if(i>=target)
                c++;
        }
        return c;
    }
};