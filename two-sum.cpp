class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int nums_size = nums.size();
        for (int i = 0 ; i < nums_size-1; i++) {
            for (int l = i+1; l < nums_size; l++ ) {
                if ( (nums.at(i)+nums.at(l))== target ) {
                    result = {i,l};
                    break;
                }
            }
        }

        return result; 
    }
};
