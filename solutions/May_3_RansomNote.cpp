// Ransom Note
// Link: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3318/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mapr, mapm;
        int i;
        // Store characters count in maps
        for(i=0;i<ransomNote.size();i++)
            if(mapr.find(ransomNote[i]) != mapr.end())
                mapr[ransomNote[i]]++;
            else
                mapr[ransomNote[i]] = 1;
        for(i=0;i<magazine.size();i++)
            if(mapm.find(magazine[i]) != mapm.end())
                mapm[magazine[i]]++;
            else
                mapm[magazine[i]] = 1;
        
        // Lets traverse
        bool resultFlag = true;
        for(auto it = mapr.begin(); it != mapr.end(); it++)
            if(mapm.find(it->first) == mapm.end() || mapm.at(it->first) < it->second)
            {
                resultFlag = false;
                break;
            }
        return resultFlag;
    }
};
