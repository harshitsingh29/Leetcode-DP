class Solution {
public:
    bool divisorGame(int n) {
        bool arr[n+1];
        memset(arr,false,n+1);
        for(int i = 2; i <= n; i++) {
            for(int j = 1; j*j <= i; j++) {
                if(i%j==0 and !arr[i-j]) {
                    arr[i] = true;
                }
            }
        }
        return arr[n];
    }
};
