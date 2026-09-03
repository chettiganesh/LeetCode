class Solution {
public:
    bool isPalindrome(string s) {
        string newword="";
        for(auto letter:s){
            // if(isalnum(letter))
            // newword+=tolower(letter);
            if(letter>='A'&&letter<='Z'){
                newword+=tolower(letter);
            }else if(letter>='a'&&letter<='z'){
                newword+=letter;
            }
            else if(letter>='0'&&letter<='9'){
                newword+=letter;
            }
        }
        string newword1=newword;
        reverse(newword1.begin(),newword1.end());
        // if(newword==newword1){
        //     return true;
        // }
        // return false;
        return newword==newword1;
    }
};