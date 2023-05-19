class Solution {
public:
    int addDigits(int num) {
        
        while(num/10)
        {
            int digitSum = 0;
           
            while(num)
            
            {
                digitSum += num % 10;
                num /= 10;
            }
            
            num = digitSum;
        }
        return num;
    }
};