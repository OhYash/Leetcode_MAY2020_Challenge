// Jewels And Stones
// Link: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3317/


class Solution {
public:
    int numJewelsInStones(string J, string S) {
        if(J.size() == 0 || S.size() == 0)
            return 0;
        sort(J.begin(), J.end());
        sort(S.begin(), S.end());
        cout << J << " " << S << endl;
        int i = 0, j = 0, count = 0;
        while(i < J.size() && j < S.size())
        {
            if(S[j]==J[i]) // Jewel
            {
                count++;
                j++;
            }
            else // Normal stone
            {
                if(S[j] < J[i])
                    j++;
                else
                    i++;
            }
        }
        return count;
    }
};
