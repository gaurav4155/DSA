class Solution {
public:
    bool rotateString(string s, string goal) {
     int n=s.size();
     for(int i=0;i<n;i++){
        char last=s[n-1];
        for(int j=n-2;j>=0;j--){
        
        s[j+1]=s[j];
        
        }
        s[0]=last;
        if(s==goal){
            return true;
        }

     }  
     return false; 




    }
};