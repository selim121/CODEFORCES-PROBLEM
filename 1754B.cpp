#include <iostream>
using namespace std;

int main(){ 
    int t; 
    cin>>t;
    while(t--){ 
        int n,i=1;
        cin>>n; 
        while(i<=n/2)  
        cout<<i+n/2<<" "<<i++<<" "; 
        if(n%2) cout<<n; 
        cout<<endl;   
    }
}