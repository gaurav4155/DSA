class Solution {
public:
    bool checkPerfectNumber(int num) {
        int dummy=num;
        
        int sum=1;
        if(num==1){
            return false;
        }
        for(int i=2;i<=num/2;i++){
            if(num%i==0){
                sum+=i;

            }


        }
        
        if(sum==num){
            return true;
        }
        else{
            return false;
        }
        
    }
};