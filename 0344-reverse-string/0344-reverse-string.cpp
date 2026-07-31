class Solution {
public:
    void reverseString(vector<char>& s) {
          int i= 0;
        int len = s.size() - 1;
        while (i < len) {
            swap(s[i], s[len]);
            i++;
            len--;
        }
        
    }
};


