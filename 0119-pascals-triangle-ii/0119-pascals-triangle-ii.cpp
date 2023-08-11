class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex==0){
            return {1};
        }
        if(rowIndex==1){
            return{1,1};
        }
        if(rowIndex==2){
            return{1,2,1};
        }
        vector<int> row {1, 2, 1};
        for(int i = 3; i<rowIndex+1; i++){
            row.push_back(1);
            for(int j = i-1; j>0; j--){
                row[j]=row[j-1]+row[j];
            }
        }
        return row;
    }
};