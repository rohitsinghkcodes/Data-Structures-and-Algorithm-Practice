class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=m; i<m+n; i++){
            nums1[i] = nums2[0];
            nums2.erase(nums2.begin());
        }
        sort(nums1.begin(), nums1.end());
       
    }
};