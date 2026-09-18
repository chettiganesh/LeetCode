class Solution {
public:
    bool isHappy(int n) {

        set<int> st;

        for(; n != 1; ) {
            if(st.find(n) != st.end())
                return false;
            st.insert(n);
            int sum = 0;
            for(; n > 0; n /= 10) {
                int digit = n % 10;
                sum += digit * digit;
            }
            n = sum;
        }
        return true;
    }
};