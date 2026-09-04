class Solution {
public:
    string reverseWords(string s) {
        string text= s;
        vector<string>words;
        string word="";
        string result="";
        
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
               word+=s[i];
            }
            else if(!word.empty() ){
                words.push_back(word);
                word="";

                

            }


        }
        if(!word.empty()){words.push_back(word);
        }
        
        reverse(words.begin(),words.end());
        for(int i=0;i<words.size()-1;i++){
           
               
                result+=(words[i]+" ");
            

        }
        int l=words.size()-1;
        string finalresult=result+words[l];
        return finalresult;


        
        
    }
};