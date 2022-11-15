#include <bits/stdc++.h>
using namespace std;

int main(){ 
    int t,n,arr, r;
    cin>>t;
    while(t--){
        set<int>a;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>arr;
            a.insert(arr);
        }
        r = a.size();
        if(n-r==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}