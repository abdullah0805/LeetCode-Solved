class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int max = 0;

        for (size_t i = 0; i < rows; ++i) {
            if (checkRows(matrix[i])) {
                max++;
            } 
        }

        std::vector<int> ans(rows, 0);
        for(int i = 0;i < rows;i++){
            for(int j = i + 1;j < rows;j++){
                if(xorRows(matrix[i], matrix[j], cols) || checkEqual(matrix[i], matrix[j], cols)){
                    ans[i]++;
                    ans[j]++;
                }
            }
        }
        int maxIt = *std::max_element(ans.begin(), ans.end());
        if(maxIt + 1 > max){
            return maxIt + 1;
        }
        else{
            return max;
        }
    }

    bool checkRows(vector<int>& row) {
        for (size_t i = 1; i < row.size(); ++i) {
            if (row[i] != row[0]) {
                return false;
            }
        }
        return true;
    }
    bool xorRows(vector<int>& row1, vector<int>& row2, int cols){
        for (int i = 0; i < cols; ++i) {
            if (!(row1[i] ^ row2[i])) { 
                return false;
            }
        }
        return true;
    }
    bool checkEqual(vector<int>& row1, vector<int>& row2, int cols){
        for (int i = 0; i < cols; ++i) {
            if (!(row1[i] == row2[i])) { 
                return false;
            }
        }
        return true;
    }
    
};