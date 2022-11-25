#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,i,result=1e9+7;
        cin>>n;
        int a[n];
        for(i=1;i<=n;i++){
            cin>>a[i];
        }
        sort(a+1,a+n+1);
       for(i=3;i<=n;i++){
           result = min(result,a[i]-a[i-2]);
       }
       cout<<result<<endl;
    }
    return 0;
}
