class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int len = nums.size();
        int sumr = 0, suml = 0;
        for (int i = 0; i<len; i++){
            sumr+=nums[i];
        }
        for(int i = 0; i<len; i++){
            if(suml==sumr-nums[i]){
                return i;
            }
            suml+=nums[i];
            sumr-=nums[i];
        }
        return -1;
    }
};