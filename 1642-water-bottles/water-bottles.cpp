class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        while(numBottles>=numExchange){
            int q = numBottles/numExchange;
            int rem = numBottles%numExchange;
            ans += q;
            numBottles = q+rem;
        }
        return ans;
    }
};