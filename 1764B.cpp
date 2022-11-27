#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int t,n,a[300005],i,b;
   cin>>t;
   while(t--){
       cin>>n;
       for(i=1;i<=n;i++){
           cin>>a[i];
       }
       b = a[1];
       for(i=2;i<=n;i++){
           b = __gcd(b,a[i]);
       }
       cout<<a[n]/b<<endl;
   }
    return 0;
}
