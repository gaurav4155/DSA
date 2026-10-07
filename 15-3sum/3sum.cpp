class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());

        
        
        vector<int>triplet(3,0);
        vector<vector<int>>result;
        
        for ( int i=0;i<n;i++){

            if(i>0 && nums[i-1]==nums[i]){
                continue;
                
            }
                int j=i+1;
                int  k=n-1;
            while( j< k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    triplet[0]=nums[i];
                    triplet[1]=nums[j];
                    triplet[2]=nums[k];
                    result.push_back(triplet);
                    j++;
                    k--;
                    while((j<k) && nums[j-1]==nums[j]){
                        j++;
                    }
                    while((j<k) && nums[k]==nums[k+1]){
                        k--;
                    }
                }
                else if(sum<0){
                    j++;
                }
                else{
                    
                        k--;
                    
                }
            }


        }
        return result;

            
        
        
       
    }
};