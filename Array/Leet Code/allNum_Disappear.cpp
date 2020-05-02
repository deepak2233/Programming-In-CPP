vector findDisappearedNumbers(vector& nums) {
vector ans;
int size =nums.size();
for(int i=0;i<size;i++){
while(nums[i]!=i+1&&nums[i]!=nums[nums[i]-1]) swap(nums[i], nums[nums[i]-1]);
}
for(int i=0;i<size;i++){
if(nums[i]!=i+1) ans.push_back(i+1);
}
return ans;
}
