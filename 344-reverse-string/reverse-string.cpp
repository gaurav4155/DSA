class Solution {
public:
    void reverseString(vector<char>& s) {
        int j=s.size();
        for(int i=0;i<s.size()/2;i++){
            char Temp=s[i];
            s[i]=s[j-1];
            s[j-1]=Temp;
            j--;
        }
        return ;
        
    }
};