class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int count=1;
        
        for( int i=0;i<n-1;i++){
            if( nums[i+1]==nums[i]){
                count++;
                            if(count>n/2){
                return nums[i];
            }
                

            }

            else{
                count=1;
            }
        }
        return nums[0];
        
    }
};