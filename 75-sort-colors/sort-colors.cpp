class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n=nums.size();
        int count0=0;
        int count1=0;
        int count2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count0+=1;

            }
            else if( nums[i]==1){
                count1+=1;
            }
            else{
                count2+=1;
            }

        }
        for(int i=0;i<count0;i++){
            nums[i]=0;
        }
        for(int j=count0;j<(count0+count1);j++){
            nums[j]=1;
        }
        for(int k=count0+count1;k<count0+count1+count2;k++){
            nums[k]=2;
        }
    }
};