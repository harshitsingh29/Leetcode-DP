// link - 

class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0) {
            return 0;
        }
        vector<int>fib(n+1,0);
        fib[0] = 0;
        fib[1] = 1;
        int m = 1;
        for(int i = 1; i <= (n / 2); i++) {
            if(2*i > n || 2*i + 1 > n) {
                break;
            }
            fib[2*i] = fib[i];
            fib[2*i+1] = fib[i] + fib[i+1];
            m = max(m,fib[2*i+1]);
        }
        return m;
        
    }
};
