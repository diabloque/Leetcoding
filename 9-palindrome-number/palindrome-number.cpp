class Solution {
public:
    bool isPalindrome(int x) {
        if ( x<0){
            return false;
        }
        long long rev =0;
        int num = x;
        int rem;
        while(num !=0){
            rem = num %10;
            rev = rev * 10 + rem;
            num = num/10;
        }
        return rev == x;
    }
};