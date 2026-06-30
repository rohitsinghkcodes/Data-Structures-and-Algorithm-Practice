class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int val = nums[0];
        int c1 = 0, c2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == val) {
                if (c1 < 2) {
                    c1++;
                    nums[c2++] = val;
                }
            } else {
                val = nums[i];
                c1 = 1;
                nums[c2++] = val;
            }
        }

        return c2;
    }
};