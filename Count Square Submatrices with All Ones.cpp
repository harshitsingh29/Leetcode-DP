// link - 

class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int counat = 0;
        for(int i = 1; i < matrix.size(); i++) {
            for(int j = 1; j < matrix[0].size(); j++) {
                if(matrix[i][j])
                    matrix[i][j] = min(min(matrix[i-1][j],matrix[i-1][j-1]),matrix[i][j-1]) + 1;
            }
        }
        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[0].size(); j++) {
                count += matrix[i][j];
            }
        }
        return count;
    }
};
