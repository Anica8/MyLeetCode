class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        
        if(digits[n-1]<9)
        {digits[n-1]+=1;
         return digits;}
        else{
            int carry=1;
            digits[n-1]=0;
            for(int i=n-2;i>=0;i--){
                if(carry!=0){
                    digits[i]=(digits[i]+1)%10;
                    if(digits[i]!=0)
                        carry=0;
                }
            }
            if(carry==1)
            {digits.push_back(1);
            rotate(digits.begin(),digits.begin()+digits.size()-1,digits.end());}
        }
        
        return digits;
    }
};