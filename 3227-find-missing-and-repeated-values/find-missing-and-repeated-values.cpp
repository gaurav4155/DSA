class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int sum=0;
        int repeating;
        unordered_map<int ,int>mp;
        for( int i=0;i<n;i++){
            for ( int j=0;j<n;j++){
                mp[grid[i][j]]++;
            }
        }
        for( auto it: mp){
            if(it.second==2){
             repeating =it.first;
            }
            sum+=it.first;

        }
        int totalsum=(n*n+1)*n*n/2;
        int missing=totalsum-sum;
        return{repeating, missing};

        
    }
};