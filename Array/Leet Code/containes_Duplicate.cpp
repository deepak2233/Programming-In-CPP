class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        int l= nums.size();
        for(auto i : nums)
        {
            s.insert(i);
        }
        return l>s.size()?true:false;
    }
};
