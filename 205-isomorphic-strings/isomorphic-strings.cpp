class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size();
        int m=t.size();
        
        unordered_map<char,char>charmap;
        unordered_map<char,char>mp;
        for(int i=0;i<m;i++){
            if(charmap.count(s[i])&& charmap[s[i]]!=t[i]){
                return false;
            }
            if(mp.count(t[i])&& mp[t[i]]!=s[i]){
                return false;
            }
            charmap[s[i]]=t[i];
            mp[t[i]]=s[i];
        }
        int a=charmap.size();
        int b=mp.size();
        if(a==b){
            return true;
        }
        return false;


        
        
    }
};