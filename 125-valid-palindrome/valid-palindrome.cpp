class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> val;
        
        for(int i=0;i<s.size();i++){
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9') ){
                if(s[i]>='A' && s[i]<='Z'){
                    val.push_back(s[i]+32);
                    // val1.push_back(s[i]+32);
                }
                else
                val.push_back(s[i]);
                // val1.push_back(s[i]);
            }
        }
        // reverse(val1.begin(),val1.end());

        // for(int i=0;i<val.size();i++){
        //     if(val[i]==val1[val1.size()-1])
        //     continue;
        //     else
        //     return false;
        // }
        // return true;

        int l,h;
        l=0;
        h=val.size()-1;
        while(l<=h){
            if(val[l]==val[h]){
            l++;
            h--;
            continue;
            }else
            return false;
        }
        return true;
        
    }
};