#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main() {
    int t,n,result,a[55];
    string s,d;
    cin>>t;
    while(t--){
        result = 1;
       cin>>n;
       for(int i=0; i<n; ++i){
           cin>>a[i];
       }
       cin>>s;
       for(int i=0; i<n; ++i){
           for(int j=0; j<n; ++j){
               if(a[i]==a[j] && s[i] != s[j]){
                   result = 0;
               }
           }
       }
       if(result == 0){
           cout<<"NO"<<endl;
       }else{
           cout<<"YES"<<endl;
       }
    }
    return 0;
}