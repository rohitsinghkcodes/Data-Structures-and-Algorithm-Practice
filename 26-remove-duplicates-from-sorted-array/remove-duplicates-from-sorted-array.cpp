class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(int i: nums) s.insert(i);
        nums.assign(s.begin(), s.end());
        return s.size();   
    }
};