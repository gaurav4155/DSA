class Solution {
public:
        
        
    string longestCommonPrefix(vector<string>& strs) {
       
        int n=strs.size();
        int start=0;

        
        string common="";
        if(n==0){
            return common;
        }
        

        int minlength =strs[0].size();
        for (int i=1;i<n;i++){
            minlength=min(minlength,(int)strs[i].size());
        }
        for(int j=0;j<minlength;j++){
            char ch=strs[0][j];
            for (int i=1;i<n;i++){
                if(strs[i][j]!=ch){
                return common;
                }
            }
            common+=ch;
        }
        

        
        return common;
        
    }
};