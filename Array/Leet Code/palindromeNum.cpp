class Solution {
public:
    bool isPalindrome(int x) {
        string p,x1;
        x1=to_string(x);
        p=x1;
    reverse(x1.begin(), x1.end());
    if(p==x1)
    {
       return true;
    }
    else
    return false;
        
    }
};
