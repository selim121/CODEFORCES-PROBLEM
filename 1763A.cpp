#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,a,max=0,min=1023;
        cin>>n;
        while(n--){
            cin>>a;
            max = max|a;
            min = min&a;
        }
        cout<<max-min<<endl;
    }
    return 0;
}