// Find the Town Judge
// Link: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3325/

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<pair<bool, int> > report(N);
        int i;
        for(i=0;i<trust.size();i++)
        {
            report[trust[i][0]-1].first = true;
            report[trust[i][1]-1].second += 1;
        }
        for(i=0;i<N;i++)
            if(report[i].first == false && report[i].second == N-1)
                return i+1;
        return -1;
    }
};
