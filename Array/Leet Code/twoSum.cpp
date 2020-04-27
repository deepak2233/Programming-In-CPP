class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        vector<int> v=nums;
        sort(nums.begin(),nums.end());
        vector<int> ans;
        while(l<r)
        {
        	if(nums[l]+nums[r]==target)break;
        	else if(nums[l]+nums[r]>target)r--;
        	else
        	l++;
        }
        for(int i=0;i<v.size();i++)
        {
        	if(v[i]==nums[l]||v[i]==nums[r])
        	ans.push_back(i);
        }
        sort(ans.begin(),ans.end());
        return ans;
    
    }
};
