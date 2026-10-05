class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>temporary={1};
        for(int i=0;i<=rowIndex;i++){
            
            
            vector<int>rowindex;
            for(int j=0;j<=i;j++){
                if(j==0 || j==i){
                    rowindex.push_back(1);
                }
                else{
                    int sum=temporary[j-1]+temporary[j];
                    rowindex.push_back(sum);
                }
            }
          temporary.assign(i+1,0);
        temporary=rowindex;
        

        }
        return temporary;
       
    }
};