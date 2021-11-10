class Solution {
public:
    
    bool isHappy(int n) {
        unordered_set<int> numbers;
        
        int sumOfSquares = 0; 
        while(true) {
            
            // dividing by ten to pick digits successively
            while(n != 0) {
                int digit = n % 10;
                sumOfSquares += (digit * digit);
                n /= 10;
            }
            
            n = sumOfSquares;
            
            if(numbers.find(n) != numbers.end()) // equivalent to numbers.contains(n)
                return false;
            if(n == 1)
                return true;
            
            // if not in ne of both cases, insert the new number
            numbers.insert(n);
            sumOfSquares = 0; 
        }
    }
};