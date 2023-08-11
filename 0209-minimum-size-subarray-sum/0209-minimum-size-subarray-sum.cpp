class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int len = nums.size();
        int sum = 0;
        int i = 0;
        int res = len+1;
        for(int j = 0; j<len; j++){
            sum+=nums[j];
            while(sum>target-1){
                if((j-i+1)<res){
                res = j-i+1;   
                }
                sum-=nums[i++];
            }
        }
        return res==len+1 ? 0 : res;
    }
};