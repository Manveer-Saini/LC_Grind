class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int xTemp, yTemp = 0;
        int minDistance = INT_MAX;
        int currentDistance = 0;
        int result = -1;
        int index = 0;
        
        for(auto coordinatePair: points){
            xTemp = coordinatePair[0];
            yTemp = coordinatePair[1];
            
            if(xTemp == x || yTemp == y){
                currentDistance = abs(x - xTemp) + abs(y - yTemp);
                
                if(currentDistance < minDistance){
                    minDistance = currentDistance;
                    result = index;
                }
            }
            
            index++;
        }
        
        result = result;
        
        return result;
    }
};