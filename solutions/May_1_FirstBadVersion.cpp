// First Bad Version
// Binary search
// Link: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3316/

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1, end = n, mid = 1;
        do
        {
            mid = start + (end-start)/2;
            if(isBadVersion(mid))
                if(mid == start || !isBadVersion(mid-1))
                    return mid;
                else
                    end = mid;
            else
                start = mid+1;
                mid = start;
        }while(start < end);
        return mid;
    }
};
