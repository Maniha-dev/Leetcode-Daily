class Solution {
public:
    bool isSubsequence(string s, string t) {
        string n ;
        int j=0;
        for(int i=0; i<t.size(); i++){
            if(s[j]==t[i]){
                n=n+s[j];
                j++;
            }
           
        }
         if(s==n){
                return true;
            }else{
                return false;
            }
    }
};