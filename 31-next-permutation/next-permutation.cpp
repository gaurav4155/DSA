class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int j=n-1;
        int  smallest_large;
        
        for( int i=n-2;i>=0;i--){

            
            if(nums[i]< nums[j]){
                int breakpoint=i;
                for ( int k=n-1;k>i;k--){
                    if (nums[k]>nums[i]){
                        swap(nums[i],nums[k]);
                        break;
                    }
                   
                    
                }
                 
                    sort(nums.begin()+(i+1),nums.end());
                    return;
                

            }
            j--;
            
            
            

        }
        reverse(nums.begin(),nums.end());

        
    }
};