class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int inputVectorSize = nums.size();
        int potentialMatch = 0;
        vector<int> matchVector;

        for (int index1 = 0; index1 < inputVectorSize; index1++) {
            for (int index2 = 0; index2 < inputVectorSize; index2++) {

                // Cannot use same index twice
                if (index1 == index2) {
                    break;
                }

                potentialMatch = nums[index1] + nums[index2]; // Temp sum

                // Temporary sum matches desired target and we haven't found a match
                if (potentialMatch == target) {
                    matchVector.push_back(index2);
                    matchVector.push_back(index1);
                    return matchVector;
                }
                else {
                    potentialMatch = 0; // Ensure temp sum value is reset after each check
                }
            }
        }
        return matchVector;
    }
};