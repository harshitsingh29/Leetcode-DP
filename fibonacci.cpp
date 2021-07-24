link - https://leetcode.com/problems/fibonacci-number/

class Solution {
public:
    int fib(int n) {
        int first = 0;
        int second = 1;
        if(n == 0 || n == 1)
            return n;
        for(int i = 2; i <= n; i++) {
            int third = first + second;
            first = second;
            second = third;
        }
        return second;
    }
};
