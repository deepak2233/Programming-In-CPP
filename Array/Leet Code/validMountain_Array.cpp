class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        
    
        
        int  count = 0;
        if(A.size()<3)return false;
        
        for(int i = 1 ;i<A.size();i++){
            if(A[i]==A[i-1]){
                return false;
            }
            if(A[i]<A[i-1]){
                count = i-1;
                break;
            }
        }
        
        if(count==0) 
            return false;
        
        for(int i = count ;i<A.size()-1;i++){
            if(A[i]==A[i+1]){
                return false;
            }
            if(A[i]<A[i+1]){
                return false;
            }
        }
        return true;
        
    
    }
     
};
