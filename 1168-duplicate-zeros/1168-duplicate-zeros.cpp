class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int dups = 0;
        int len = arr.size();
        for(int i = 0; i<len-dups; i++){
            if(arr[i] == 0){
                if(i==len-dups-1){
                    arr[len-1] = 0;
                    len -= 1;
                    break;
                }
                dups++;
            }
        }
            int l = len-dups-1;
            for(int i = l; i>-1; i--){
                if(arr[i] == 0){
                    arr[i+dups] = 0;
                    dups--;
                    arr[i+dups] = 0;
                }else{
                    arr[i+dups] = arr[i];
                }
            }
    }
        
};