#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main() {
   int t,n,r=0,k=0;
   string a;
   cin>>t;
   while(t--){
       cin>>n;
       cin>>a;
       a = a+'@';
       r=0;
       k=0;
       for(int i=0;i<n;i++){
           if(r==0){
               r=1;
           }
           else if(r==1){
               if(a[i]==a[i+1]){
                   r = 0;
                   i++;
               }else{
               k = 1;
               break;
               }
           }
       }
       if(k==1){
           cout<<"NO"<<endl;
       }else{
           cout<<"YES"<<endl;
       }
       
   }
    return 0;
}