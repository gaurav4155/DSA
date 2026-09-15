class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
   unordered_map<char,int>mp;
   for(int i=0;i<n;i++ ){
        mp[s[i]]++;
     
   }
    vector<pair<char,int>>v;
    for (auto pair: mp){
        v.push_back(pair);
    }
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i].second<v[j].second){
                swap(v[i],v[j]);
            }
        }
    }
    string ans="";
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].second;j++){
             ans+=v[i].first;
        }
       

    }
    return ans;

        
    }
};