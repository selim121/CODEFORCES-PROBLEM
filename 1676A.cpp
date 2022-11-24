#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,m,p,q,count;
    cin>>t;
    while(t--){
        cin>>n;
        if(n==0){
            cout<<"YES"<<endl;
        }else{
            p=0;
        count=0;
        while(n>0){
            m=n%10;
            p=p+m;
            n=n/10;
            count++;
            if(count==3){
                q=p;
            }
        }
        if(p-q==q){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        }
    }
    
   
    return 0;
}