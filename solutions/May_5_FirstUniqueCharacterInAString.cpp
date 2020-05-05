// First Unique Character in a String
// Link: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3320/

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> dict;
        int i;
        for(i=0;i<s.size();i++)
            if(dict.find(s[i]) == dict.end())
                dict[s[i]] = 1;
            else
                dict[s[i]]++;
        for(i=0;i<s.size();i++)
            if(dict[s[i]]==1)
                return i;
        return -1;
    }
};
