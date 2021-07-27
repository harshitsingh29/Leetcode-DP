// link - https://leetcode.com/problems/count-number-of-teams/

class Solution {
public:
    int numTeams(vector<int>& rating) {
        if(rating.size()<3) {
            return 0;
        }
        int count = 0;
        for(int i = 1; i < rating.size() - 1; i++) {
            int left = 0;
            int right = 0;
            for(int j = i - 1; j >=0 ; j--) {
                if(rating[j] < rating[i]) {
                    left++;
                }
            }
            for(int j = i + 1; j < rating.size() ; j++) {
                if(rating[j] > rating[i]) {
                    right++;
                }
            } 
            count += (left * right) + (i - left)*(rating.size() - i - 1 - right);
        }
        return count;
    }
};
