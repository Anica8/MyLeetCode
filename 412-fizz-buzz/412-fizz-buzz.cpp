class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        
        for(int i=0;i<n;i++){
            int x=i+1;
            if(x%3==0 && x%5==0){
                ans.push_back("FizzBuzz");
            }else if(x%3==0){
                ans.push_back("Fizz");
            }else if(x%5==0){
                ans.push_back("Buzz");
            }else{
                ans.push_back(to_string(x));
            }
        }
        return ans;
    }
};