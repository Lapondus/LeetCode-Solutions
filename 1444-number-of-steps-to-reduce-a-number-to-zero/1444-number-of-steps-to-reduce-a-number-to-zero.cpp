class Solution {
public:
    int numberOfSteps(int num) {
        int i = 0;
        while(!(num==0)){
            i++;
            if(num%2) num -=1;
            else num /=2;
        }
        return i;
    }
};