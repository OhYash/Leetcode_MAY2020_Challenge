// Check If It Is a Straight Line
// Link: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3323/

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size() < 3)
            return true;
        double plane = abs((double)coordinates[0][1] - coordinates[1][1])/abs((double)coordinates[0][0] - coordinates[1][0]), nplane;
        int i = 2;
        while(i < coordinates.size())
        {
            nplane = abs((double)coordinates[i-1][1] - coordinates[i][1])/abs((double)coordinates[i-1][0] - coordinates[i][0]);
            if(nplane != plane)
                return false;
            i++;
        }
        return true;
    }
};
