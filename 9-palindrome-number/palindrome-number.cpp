class Solution {
public:
    bool isPalindrome(int x) {
        int num=0,rem;
        int temp=x;
        if(x<0){
            return false;
        }
        while(x>0){
            rem=x%10;
            if(num>INT_MAX/10 || (num==INT_MAX && rem>7)){
                return false;
            }
            num=num*10+rem;
            x=x/10;

        }
        if(num==temp){
            return true;
        }
        return false;
        
    }
};