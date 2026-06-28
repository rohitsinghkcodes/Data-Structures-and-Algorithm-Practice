class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> mp;
        int k=0;
        for(int i:nums) mp[i]++;
        for(auto it:mp){
            int c=it.second;
            if(c>2) c=2;
            while(c--) nums[k++]=it.first;
        }
        return k;
    }
};