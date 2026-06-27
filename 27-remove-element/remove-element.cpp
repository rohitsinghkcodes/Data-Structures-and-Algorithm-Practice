class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=0;

        vector<int> v;
        for(int i:nums){
            if(i==val){
                n++;
            }
            else v.push_back(i);
        }
        v.insert(v.end(), n,val);
        cout<<n<<endl;
        for(int i:v) cout<<i<<" ";
        nums=v;
        return nums.size()-n;
    }
};