#include<iostream>
using namespace std;
#include<vector>

int countPeaks(vector<int> checkpoints) 
{
  int peaks = 0;
  for(int i = 1; i < checkpoints.size() - 1; i++) {
     if(checkpoints[i-1] < checkpoints[i] && checkpoints[i+1] < checkpoints[i]) {
        peaks++;
     }
  }
  return peaks;
}

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,input;
        vector<int> checkpoints;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>input;
            checkpoints.push_back(input);
        }

        cout<<"Case"<<" "<<"#"<<i<<":"<<" "<<countPeaks(checkpoints)<<"\n";
    }

}
