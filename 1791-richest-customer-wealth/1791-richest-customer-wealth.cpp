class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res = 0, sres;
        for (int i = 0; i <accounts.size(); i++){
            sres = 0;
            for(int j = 0; j<accounts[i].size(); j++){
                sres += accounts[i][j];
            }
            if(sres>res)
                res = sres;
        }
        return res;
    }
};