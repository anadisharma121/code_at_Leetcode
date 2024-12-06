class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool res = false;
        int a,b;
        a=0;
        b=0;
        vector<bool> check;
        while(b <t.length()){
            if(s[a]==t[b]){
                check.push_back(true);
                a++;
                b++;
            }else
            b++;
        }
        
        if(s.length()==check.size())
        res=true;

        return res;
        
    }
};