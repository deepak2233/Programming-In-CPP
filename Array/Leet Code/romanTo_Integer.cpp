class Solution {
public:
    int romanToInt(string s) {
    if(s.size()==0)return 0;
    unordered_map<char,int> map={
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000}};
    int ans=map[s[s.size()-1]];
    for(int i=s.size()-2;i>=0;i--)
    {
        if(map[s[i+1]]>map[s[i]])ans-=map[s[i]];
        else
            ans+=map[s[i]];
    }
        return ans;
    }

};
