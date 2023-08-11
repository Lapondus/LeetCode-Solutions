class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size()-1;
        for (int i = 0; i<len+1; i++){
            if(nums[i]==val){
                while(nums[len]==val&&len>i){
                    len--;
                }
                nums[i]=nums[len];
                len--;
            }
        }
        return len+1;
    }
};