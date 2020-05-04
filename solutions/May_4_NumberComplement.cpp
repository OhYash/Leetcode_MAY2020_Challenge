// Number Complement
// Link: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3319/
// Alternative link: https://leetcode.com/problems/complement-of-base-10-integer/

class Solution {
public:
    long long int getMSB(int num)
    {
        long long int count=0;
        while(num)
        {
            count++;
            num = num>>1;
        }
        return count;
    }
    
    int findComplement(int num) {
        if(num == 0) 
            return 1;
        long long int msb = getMSB(num);
        long long int opp = 1 << msb;
        return opp-num-1;
    }
};
