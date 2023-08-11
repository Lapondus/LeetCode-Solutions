class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int fcount = 0;
        for (int num : nums){
            int count = 1;
            while(num>9){
                num /= 10;
                    count++;
            }
            if(!(count%2)){
               fcount++; 
            }
        }
        return fcount;
    }
};