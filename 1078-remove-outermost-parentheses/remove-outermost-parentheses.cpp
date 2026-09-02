class Solution {
public:
    string removeOuterParentheses(string s) {
       string text= "";
        int count=0;
        for(int i=0;i<s.size();i++){
            if(count==0){
                if(s[i]=='('){
                    count++;
                }
                
            }
            else{
                if(s[i]=='('){
                count++;
                text+=s[i];
                }
                else if(s[i]==')' && count!=1){
                    count--;
                    text+=s[i];
                }
                else{
                    count--;
                }
            }
        }
        return text;
        
    }
};