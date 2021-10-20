class Solution {
public:
    int getSum(int a, int b) {
        unsigned int a1 = a, b1 = b;
        int ans = 0, carry = 0;
        while(b1 != 0){
            ans = a1 ^ b1;
            carry = (a1 & b1) << 1;
            a1 = ans;
            b1 = carry;
        }
        return a1;
    }
};