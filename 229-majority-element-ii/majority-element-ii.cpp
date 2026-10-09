class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=1;
        int j=1;
        vector<int>result;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]+=1;
        }
        for (const auto& pair : mp) {
    if (pair.second > n / 3) {
        result.push_back(pair.first);
    }
}
        return result;
        

        
    }
};