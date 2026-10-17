class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        int countleft=0;
        int countright=0;
        
        int maxcount=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                countleft++;
                
            }
            else if(s[i]==')'){
                countright++;
                
            }
            maxcount=max(maxcount,countleft-countright);
        }
        return maxcount;
        
    }
};