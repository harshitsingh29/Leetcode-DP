// link - https://leetcode.com/problems/is-subsequence/

// recursive approach
class Solution {
public:
    
    bool checker(string s, string t, int i,int j) {
        if(j > t.length()){
            return false;
        }
        else if(i == s.length() and s[i] == t[j]) {
            return true;
        }
        else if(s[i] == t[j]) {
            return checker(s,t,i+1,j+1); 
        }
        return checker(s,t,i,j+1);
    }
    
    bool isSubsequence(string s, string t) {
        if(s.length() == 0) {
            return true;
        }
        return checker(s,t,0,0);
    }
};

//2 pointer
class Solution {
public:
    
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        int n = s.length();
        int m = t.length();
        while(j < m and i < n) {
            if(s[i] == t[j]) {
                i++;
            }
            j++;
        }
        return i==n ? 1 : 0;
    }
};

// dp
class Solution {
public:
    
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        int n = s.length();
        int m = t.length();
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        for(int i = 1; i < n+1; i++){
            for(int j = 1; j < m+1; j++){
                if(s[i-1] == t[j-1]) {
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else {
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        if(dp[n][m] == n){
            return true;
        }
        return false;
        
    }
};
