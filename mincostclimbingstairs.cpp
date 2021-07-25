// link - https://leetcode.com/problems/min-cost-climbing-stairs/

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int total = 0;
        int first = cost[0];
        int second = cost[1];
        if(n < 2) {
            return min(first,second);
        }
        for(int i = 2; i < n; i++) {
            total = cost[i] + min(first,second);
            first = second;
            second = total;
        }
        return min(first,second);
    }
};
