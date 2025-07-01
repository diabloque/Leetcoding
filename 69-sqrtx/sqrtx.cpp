class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x; // Handle 0 and 1 quickly

    long left = 0;
    long right = x / 2 + 1; // The sqrt(x) is always <= x/2+1 for x >= 2

    while (left <= right) {
        long mid = left + (right - left) / 2;
        long sq = mid * mid;

        if (sq == x) {
            return (int)mid;
        } else if (sq < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    // When the loop ends, right is the integer part of the sqrt(x)
    return (int)right;
    }
};