class Solution {
public:
    int findNumbers(vector<int>& nums) {
    int count=0;
    for(int i : nums)
    {
        int ptr=0;
        while(i!=0)
        {
            i=i/10;
            ptr++;
        }
        if(ptr%2==0)
        {
            count++;
        }
                
    }
   return count;
          
}
};
