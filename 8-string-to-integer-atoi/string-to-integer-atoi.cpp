class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int sign=1;
        int num=0;
        int n=s.size();
        int digit;
        while(i<n && s[i]==' '){
            i++;
        }
        if(s[i]=='-' && i<n){
            sign=-1;
            i++;
        }
        else if(s[i]=='+' && i<n){
            i++;
        }
            

        
        while(i<n){
            if((s[i]-'0')>=0 &&  (s[i]-'0')<=9){
                 digit=s[i]-'0';
                 if(num>INT_MAX/10 ||(num==INT_MAX/10 && digit>7)){
                    if(sign==1) return INT_MAX;
                    else return INT_MIN;
                 }
                 
                
                num=num*10+digit;
               
                i++;

               
               
               
                
            }
            else{
                break;
            }
            
        }
        return sign*num;
    }
};