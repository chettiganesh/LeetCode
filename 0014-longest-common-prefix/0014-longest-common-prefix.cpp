class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    string maxst="";
    //   for(int i=0;i<strs[0].size();i++){
    //     char ch=strs[0][i];
    //     for(int j=1;j<strs.size();j++){
    //         if(i>=strs[j].size()||strs[j][i]!=ch){
    //             return maxst;
    //         }
    //     }
    //     maxst+=ch;
    //   }
    //   return maxst;
 for(int i=0;i<strs[0].size();i++){
    for(int j =1;j<strs.size();j++){
        if(strs[j][i]!=strs[0][i]){
             return maxst;
        }
       
    }
   maxst+=strs[0][i];
 }
 return maxst;
    }
};