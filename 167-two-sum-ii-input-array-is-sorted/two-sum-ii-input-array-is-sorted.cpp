class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;
        vector<int> ans;
        while(i < j){
            if(numbers[i] == target - numbers[j]){
                ans = {i+1,j+1};
                break;
            }
            else if(numbers[i] > target - numbers[j]){
                j--;
            }else{
                i++;
            }
        }

        return ans;
    }
};