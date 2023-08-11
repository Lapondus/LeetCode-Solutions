class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int len = arr.size();
        int temp1;
        int temp2 = -1;
        for(int k = len; k>0; k--){
            temp1 = arr[k-1];
            arr[k-1] = temp2;
            if(temp1>temp2){
                temp2 = temp1;   
            }
        }
        return arr;
    }
};