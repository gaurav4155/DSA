class Solution {
public:
    bool isPalindrome(string s) {
        string dummy="";
        int n=s.size();
        for(int i=0;i<n;i++){
            if(islower(s[i])|| isdigit(s[i])){
                dummy+=s[i];
            }
            else if(isupper(s[i])){
                dummy+=tolower(s[i]);

            }
            else{
                continue;
            }

        }
        int i=0;
        int j=dummy.size();
        for(int i=0;i<dummy.size()/2;i++){
            if(dummy[i]!=dummy[j-1]){
                return false;
            }
            else{
                j--;
            }
        }
        return true;


       
    }
};