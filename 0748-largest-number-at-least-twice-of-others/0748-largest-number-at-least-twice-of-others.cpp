class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int len = nums.size();
        int f = -1, s = -1, ind = 0;
        for(int i = 0; i<len; i++){
            if(nums[i]>f){
                s = f;
                f = nums[i];
                ind = i;
            }else if(nums[i]>s){
                    s = nums[i];       
            }
        }
        if(f<2*s){
            return -1;
        }
        return ind;
    }
};