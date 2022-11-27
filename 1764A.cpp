#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int t,n,a,k;
   cin>>t;
   while(t--){
       cin>>n;
       k=0;
       while(n--){
           cin>>a;
           k++;
       }
       cout<<1<<" "<<k<<endl;
   }
    return 0;
}
