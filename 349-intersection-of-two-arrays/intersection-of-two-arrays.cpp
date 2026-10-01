class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>intersexion;

        int m=nums1.size();
        int n=nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0;
        int j=0;
        while(i<m && j<n){
            if(nums1[i]>nums2[j]){
                j++;
            }
            else if( nums1[i]<nums2[j]){
                i++;
            }
            else{
                if(intersexion.empty()||intersexion.back()!=nums1[i]){
                    intersexion.push_back(nums1[i]);
                }
                i++;
                j++;
            }
        }
        return intersexion;
        
        
        
    }
};