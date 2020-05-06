// Majority Element
// Link: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3321/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int num = -1, count = 0, i;
        for(i=0;i<nums.size();i++)
            if(nums[i]==num)
                count++;
            else
            {
                if(count==0)
                {
                    num = nums[i];
                    count=1;
                }
                else
                    count--;
            }
        return num;
    }
};
