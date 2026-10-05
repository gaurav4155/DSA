class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        vector<int>result;
       unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
           int  difference=target-nums[i];
            if(mp.find(difference)!=mp.end()){
                result.push_back(i);
                result.push_back(mp[difference]);
            }
            mp[nums[i]]=i;
            
            
            


        }
        return result;
    }
};