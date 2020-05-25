#include<iostream>
#include<iomanip>
using namespace std;
long fact(long n){
   int i, fact = 1;
   for(i = n; i>1; i--)
      fact *= i;
   return fact;
}
long nCr(long n, long r){
   long nume = 1, i;
   for(i = n; i>r; i--)
      nume *= i;
   return long(nume/fact(n-r));
}
void genPascalsTriangle(long n){
   for(int i = 0; i<n; i++){
      for(int j = 0; j<(n-i-1); j++)
         cout <<setw(3)<< " ";
      for(int j = 0; j<(i+1); j++)
         cout <<setw(3)<< nCr(i, j) <<setw(3)<< " ";
      cout << endl;
   }
}
main(){
#ifndef ONLINE_JUDGE 
   freopen("input.text", "r", stdin); 
   freopen("output.text", "w", stdout); 
#endif
   int n;
   cin >> n;
   genPascalsTriangle(n);
}
