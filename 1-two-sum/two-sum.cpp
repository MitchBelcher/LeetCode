class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // -- REVISED SOLUTION (using unordered_map (hash)) - O(n)

        // map{key (index), value (at that index)}
        unordered_map<int, int> map;

        for (int index = 0; index < nums.size(); index++) {
            int neededValue = target - nums[index]; // Find needed value to reach target based on value at current index

            if (map.find(neededValue) != map.end()) { // Search unordered_map for the needed value
                return {map[neededValue], index}; // Needed value found, return index we found it at, and current 'nums' index
            }
            map[nums[index]] = index; // Didn't find required value, insert value of current index of 'nums' and the current index into unordered_map
        }
        return {-1,-1}; // Return clear error condition instead of basic empty array



        /* -- ORIGINAL SOLUTION - O(n^2)
        int inputVectorSize = nums.size();
        int potentialMatch = 0;
        vector<int> matchVector;

        for (int index1 = 0; index1 < inputVectorSize; index1++) {
            for (int index2 = index1 + 1; index2 < inputVectorSize; index2++) {

                potentialMatch = nums[index1] + nums[index2]; // Temp sum

                // Temporary sum matches desired target and we haven't found a match
                if (potentialMatch == target) {
                    matchVector.push_back(index1);
                    matchVector.push_back(index2);
                    return matchVector;
                }
                else {
                    potentialMatch = 0; // Ensure temp sum value is reset after each check
                }
            }
        }
        return matchVector;
        */
    }
};