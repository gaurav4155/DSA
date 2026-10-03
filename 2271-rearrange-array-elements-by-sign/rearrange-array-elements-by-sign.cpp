class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n= nums.size();
        vector<int>result;
        int i=0;
        int j=0;
        while(i<n && j<n){
            if(nums[i]>0 && nums[j]<0){
                result.push_back(nums[i]);
                result.push_back(nums[j]);
                i++;
                j++;
            }
            else if(nums[i]>0 && nums[j]>0){
                j++;
            }
            else if(nums[i]<0 && nums[j]<0){
                i++;
            }
            else{
                i++;
            }
            
            
        }
        return result;
    }
};