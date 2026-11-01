class Solution {
public:
    vector<string>result;
    bool isvalid(string&str){
        int count=0;
        for(char & ch:str){

        if(count<0){
            return false;
        }
        if(ch=='('){
            count++;
        }
        else{
            count--;
        }
        }
        if(count==0){
            return true;
        }
        return false;
    }
    void solve(string & dummy, int n){
        if(dummy.size()==2*n){
            if(isvalid(dummy)){
                result.push_back(dummy);
            }
            return;
        }
        dummy.push_back('(');
        solve(dummy,n);
        dummy.pop_back();

        dummy.push_back(')');
        solve(dummy,n);
        dummy.pop_back();

        
    }
    vector<string> generateParenthesis(int n) {
        
        string dummy ="";
        solve(dummy,n);
        return result;

    }

};