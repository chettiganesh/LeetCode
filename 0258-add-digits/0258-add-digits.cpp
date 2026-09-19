class Solution {
public:
    int addDigits(int num) {
        
        int sum=0;
        while(num>9){
        for(;num>0;num/=10){
            int dig=num%10;
            sum+=dig;
        }
        num=sum;
        sum=0;
        }
       

        return num;
    }
};