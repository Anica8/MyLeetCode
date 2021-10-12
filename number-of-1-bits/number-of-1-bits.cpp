class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        bitset<32> bs(n);
        for(int i=0;i<32;i++){
            if(bs[i]&1==1)
                count++;
        }
        return count;
    }
};