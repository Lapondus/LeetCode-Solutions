class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> tb;
        for (int i = 1; i<n+1; i++){
            tb.push_back("");
            if(!(i%3)) tb[i-1] += "Fizz";
            if(!(i%5)) tb[i-1] += "Buzz";
            if(!(!(i%5))&&!(!(i%3))) tb[i-1] = to_string(i);
        }
        return tb;
    }
};