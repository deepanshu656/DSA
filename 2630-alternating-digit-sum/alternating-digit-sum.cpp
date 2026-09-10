class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;
        int sign = -1;
        for(int digits = n; digits; digits /=10){
            sign *= -1;
            sum += (sign*(digits%10));
        }
        return sum*sign;
    }
};