
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = 0;
        int m = 0;

        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] == 1) {
                n++;
            }

            if(nums[i] == 0) {
                if(n > m) {
                    m = n;
                }
                n = 0;
            }
        }

        // Last sequence of 1s
        if(n > m) {
            m = n;
        }

        return m;
    }
};