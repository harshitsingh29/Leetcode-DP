// link - https://leetcode.com/problems/count-sorted-vowel-strings/

//backtracking

class Solution {
public:
    vector<char> vowels = {'a','e','i','o','u'};
    int countVowelStrings(int n) {
        int count = 0;
        checker(n,' ',count);
        return count;
    }
    
    void checker(int n, char e, int &count) {
        if(n == 0) {
            count++;
        }
        else {
            for(auto it : vowels) {
                if(e <= it) {
                    checker(n-1,it,count);
                }
            } 
        }
    }
};


//dp
class Solution {
public:
    int countVowelStrings(int n) {
        vector<int>dp(5,1);
        for(int i = 0; i < n; i++) {
            for(int j = 1; j < 5; j++) {
                dp[j] = dp[j-1] + dp[j];
            }
        }
        return dp[4];
    }
};
