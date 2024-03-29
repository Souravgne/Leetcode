class Solution {
public:
    bool isValidSerialization(string nums) {
        int val = 1;
        for (int i = 0; i < nums.length(); i++) {
            if (nums[i] == ',') {
                continue;
            }
            val--;
            if (val < 0) {
                return false;
            }
            if (nums[i] != '#') {
                val += 2;
                while (i + 1 < nums.length() && nums[i+1] != ',') {
                    i++;
                }
            }
        }
        return val == 0;
    }
};
