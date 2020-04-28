class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX,maxp=0;
       
        for(auto i: prices)
        {
            if(i<min)
                min=i;
            if((i-min)>maxp)
            maxp=(i-min);
        }
        return maxp;
    }
    
};
