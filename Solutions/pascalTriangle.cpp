class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> resultTriangle;
        int sum;
            
        for(int i = 0; i < numRows; i++){
            vector<int> row;
            row.push_back(1);
            
            for(int j = 0; j < i; j++){
                int currentRow = i - 1;
                
                if(j + 1 == i){
                    row.push_back(1);
                }
                else{
                    row.push_back(resultTriangle[currentRow][j] + resultTriangle[currentRow][j + 1]);
                }
            }
            
            resultTriangle.push_back(row);
        }
        return resultTriangle;
    }
};