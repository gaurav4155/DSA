#include<bits/stdc++.h>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int el = 0, count = 0;

        // find candidate
        for(int i=0;i<nums.size();i++){
            if(count == 0)
                el = nums[i];

            if(nums[i] == el)
                count++;
            else
                count--;
        }

        return el;  // 
      
    }
};