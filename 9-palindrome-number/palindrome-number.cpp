class Solution {
public:
    bool isPalindrome(int x) {
        int rem,ans=0,num;
        num=x;
        while(num>0){
            rem=num%10;
            num=num/10;
            
            
            if(ans>INT_MAX/10)
             return 0;
             ans= ans*10 + rem;
        };
        if(x==ans)
        return 1;
        else return 0;
    }
};