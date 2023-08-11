class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int min = 0, max = numbers.size()-1;
        while(1){
            if(numbers[min]+numbers[max]==target){
                return {min+1, max+1};
            }
            if(numbers[min]+numbers[max]<target){
                min++;
            }else{
                max--;
            }
        }
    }
};