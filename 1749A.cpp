#include <iostream>
using namespace std;

int main() {
    int t,n,m,a,b;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<m;i++){
            cin>>a>>b;
        }
        if(n==m){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}