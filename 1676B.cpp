#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,a,i,m,sum;
    cin>>t;
    while(t--){
        cin>>n;
        sum=0;
        m=100000000;
        for(i=0;i<n;i++){
            cin>>a;
            sum = sum+a;
            m = min(m,a);
        }
        int result = sum - n*m;
        cout<<result<<endl;
        
    }
    return 0;
}