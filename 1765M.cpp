#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
   int t,n;
   cin>>t;
   while(t--){
       cin>>n;
       int m=1;
       for(int i=2;i*i<=n;i++){
           if(n%i==0){
               m = max(m,n/i);
           }
       }
       cout<<m<<" "<<n-m<<endl;
   }
    return 0;
}