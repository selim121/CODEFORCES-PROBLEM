#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,a,b,i;
    cin>>t;
    while(t--){
        cin>>n>>a>>b;
        for(i=0;i<n;i++){
            putchar(i%b+97);
        }
        cout<<endl;
        
    }
}
