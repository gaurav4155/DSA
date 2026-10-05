class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;
        
        result.push_back({1});
        
        for(int i=1;i<numRows;i++){
            vector<int>rows;
            
            for( int j=0;j<=i;j++){
                
                if(j==0 ||j==i){
                    rows.push_back(1);
                }
                else{
                    
                        int sum=result[i-1][j-1]+result[i-1][j];
                        rows.push_back(sum);
                       
                    
                }
                

            }
            result.push_back(rows);
        }
        return result;


    }
};