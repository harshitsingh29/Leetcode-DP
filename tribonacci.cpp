// link - https://leetcode.com/problems/n-th-tribonacci-number/

class Solution {
public:
    int tribonacci(int n) {
        int first = 0;
        int second = 1;
        int third = 1;
        if(n <= 1) {
            return n;
        }
        else if(n == 2) {
            return 1;
        }
        int fourth;
        for(int i = 3; i <= n; i++) {
            fourth = third + second + first;
            first = second;
            second = third;
            third = fourth;
        }
        return fourth;
    }
};
