class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int drop=0;
        for(int i=0;i<n-1;i++){
            if(nums[i+1]<nums[i]){
                drop++;
            }

        }
        if(nums[0]>=nums[n-1] && drop==1){
            return true;
        }
        else if(nums[0]<=nums[n-1] && drop==0){
            return true;

        }
        return false;
        
    }
};