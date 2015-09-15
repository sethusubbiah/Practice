class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if (n<=0)
            return false;
        
        if (n == 1)
            return true;
        
        int m = n-1;
        
        if ((m&n) == 0)
            return true;
        else
            return false;
        
    }
};
