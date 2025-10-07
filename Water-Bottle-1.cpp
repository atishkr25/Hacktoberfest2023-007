class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        // 15 / 4 = 3
        // 15 % 4 = 3
        int ans = 0;
        // int num = (numBottles/numExchange) + (numBottles%numExchange);

        int num = numBottles;
        while(num >= numExchange) {
            int ques = num/numExchange;
            int rem = num%numExchange;
            ans += ques;
            num = ques + rem;
        }
        return ans + numBottles;
    } // ans = 3 + 1 +  
};
