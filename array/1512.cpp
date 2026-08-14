class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int index=0;

        for(int i=0; i<nums.size(); i++){
            for(int j=1; j<nums.size(); j++){
                if(nums[i] == nums[j] && i < j )
                {
                    index=index+1;
                }
            }
       }
   return index;  }
};