class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count=0;
        int v[heights.size()] ;
        for(int i=0;i<heights.size();i++)
        {
            v[i]=heights[i];
        }
        std::sort(v,v+heights.size());
        for(int i=0;i<heights.size();i++)
        {
            if(v[i]!=heights[i])
            {
                count++;
            }
        }
        return count;
    }
};
