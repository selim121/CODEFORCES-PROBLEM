#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int m,n,p,q;
        cin>>m>>n>>p>>q;
        if((m<n && p<q && m<p && n<q) || (p<q && m<n && p<m && q<n) || (n<m && q<p && n<q && m<p) || (n<m && q<p && q<n && p<m)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
