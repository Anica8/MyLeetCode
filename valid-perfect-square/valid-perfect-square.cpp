class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 0 || num == 1)
        {
            return true;
        }
        long long left = num , right = 1,mid;
        while(right <= left)
        {
            mid = (right+left)/2;
            
            if(mid*mid == num)
            {
                return true;
            }
            else if(mid*mid < num)
            {
                right = mid + 1;
            }
            else
            {
                left = mid - 1;
            }
        }
        return false;
    }
};