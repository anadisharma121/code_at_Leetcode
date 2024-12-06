class Solution {
public:
    bool judgeCircle(string moves) {
        int arr[4]={0};
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='R')
            arr[0]+=1;
            if(moves[i]=='L')
            arr[1]+=1;
            if(moves[i]=='U')
            arr[2]+=1;
            if(moves[i]=='D')
            arr[3]+=1;

        }

        if(arr[0]==arr[1] && arr[2]==arr[3])
        return true;
        else
        return false;
        
    }
};