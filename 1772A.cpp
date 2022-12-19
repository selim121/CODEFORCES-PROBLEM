#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int m,n;
        m = (int) a[0];
        n = (int) a[2];
        int result = (m+n) - 96;
        cout<<result<<endl;
    }
    return 0;
}
