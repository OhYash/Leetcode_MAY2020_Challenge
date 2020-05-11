// Flood Fill
// Link: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3326/

class Solution {
public:
    int mx[4] = {0, 1, 0, -1}; // Bottom, right, Top, left
    int my[4] = {1, 0, -1, 0};

    bool isValid(int irow, int icol, int sr, int sc)
    {
        if(irow==0 || icol==0)
            return false;
        if(sr < 0 || sr >= irow)
            return false;
        if(sc < 0 || sc >= icol)
            return false;
        return true;
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(isValid(image.size(), image[0].size(), sr, sc) && newColor == image[sr][sc])
            return image;
        int i, pc = image[sr][sc];
        image[sr][sc] = newColor;
        for(i=0;i<4;i++)
        {
            int nx = sr+mx[i];
            int ny = sc+my[i];
            if(isValid(image.size(), image[0].size(), nx, ny) && pc==image[nx][ny])
                floodFill(image, nx, ny, newColor);
        }
        return image;
    }
};
