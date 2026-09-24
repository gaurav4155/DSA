class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        set<int>st1;
        set<int>st2;
        set<int>st3;
        for( int i=0;i<m;i++){
            st1.insert(nums1[i]);
        }
        for(int j=0;j<n;j++){
            st2.insert(nums2[j]);
        }
        set_intersection(st1.begin(),st1.end(),st2.begin(),st2.end(),inserter(st3,st3.begin()));

        if(st3.empty()){
            return -1;
        }
        auto it= st3.begin();
        return *it;
    }
};