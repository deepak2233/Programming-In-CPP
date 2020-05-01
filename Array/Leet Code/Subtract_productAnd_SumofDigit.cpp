class Solution {
public:
    int subtractProductAndSum(int n) {
        if(n<=0)
            return 0;
        int sum=0,prod=1,rem,res;
        while(n!=0)
        {
            rem=n%10;
            sum+=rem;
            prod*=rem;
            n=n/10;
        }
        res=(prod-sum);
        return res;
    }
};
