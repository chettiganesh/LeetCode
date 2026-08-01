class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        int original = x;
        long long rev = 0;

        for(; x > 0; x /= 10){
            int digit = x % 10;
            rev = rev * 10 + digit;
        }

        if(rev == original){
            return true;
        } else {
            return false;
        }
    }
};
