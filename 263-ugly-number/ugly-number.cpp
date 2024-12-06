class Solution {
public:
    bool isUgly(int n) {
        if(n<=0)
        return false;
        if(n==1)
        return true;
        bool check=false;
        
        do{
        if(n%2==0){
            n=n/2;
            check=true;
        }
        else if(n%3==0){
            n=n/3;
            check=true;
        }
        else if(n%5==0){
            n=n/5;
            check=true;
        }
        else
            check=false;
        }while(check==true);

        if(n==1)
        return true;
        else
        return false;

    }
};