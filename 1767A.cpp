#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
       int a1,a2,a3,b1,b2,b3;
       cin>>a1>>b1>>a2>>b2>>a3>>b3;
       if((a1==a2 || a2==a3 || a1==a3) && (b1==b2 || b2==b3 || b1==b3)){
           cout<<"NO"<<endl;
       }else{
           cout<<"YES"<<endl;
       }
   }
    return 0;
}