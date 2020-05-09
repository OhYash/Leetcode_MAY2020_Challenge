// Valid Perfect Square
// Links: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3324/

class Solution {
public:
    bool isPerfectSquare(int num) {
        
        if (num == 1 || num == 0)
            return true;
        long long int start = 2, end = num, mid, midsq;
        while(start <= end)
        {
            mid = start + (end-start)/2;
            midsq = mid*mid;
            if(num == midsq)
                return true;
            else if(num > midsq)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return false;
    }
};
