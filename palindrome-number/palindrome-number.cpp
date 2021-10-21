class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x>0 && !x%10)) return false;        
        long num = 0, y = x;        
        do{
            num = (num*=10) + y%10;
        }while (y /= 10);        
        return num == x;   
    }
};