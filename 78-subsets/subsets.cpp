class Solution {
public:
    vector<vector<int>>result;
    void Solve(vector<int>&nums,vector<int>&subset,int i){
        if(i>=nums.size()){
            result.push_back(subset);
            return;
        }
        
        subset.push_back(nums[i]);
        Solve(nums,subset,i+1);
        subset.pop_back();
        Solve(nums,subset,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
     vector<int>subset;
     Solve(nums,subset,0);
     return result;

    }
};