#pragma once
#include "Common.h"
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int length = nums.size();
        for(int i=0;i<length;i++)
        {
            for(int j=i+1;j<length;j++)
            {
                if (nums[i]+nums[j]==target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    i = length;
                    break;
                }
            }
        }
        return result;
    }

};