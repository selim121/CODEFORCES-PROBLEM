#include <iostream>
#include <cstring>
#include <cmath>
 
using namespace std;
 
int main() {
    int t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if(a>=b && b>=c || c>=b && b>=a){
            cout<<b<<endl;
        }
        if(b>=c && c>=a || a>=c && c>=b){
            cout<<c<<endl;
        }
        if(c>=a && a>=b || b>=a && a>=c){
            cout<<a<<endl;
        }
    }
    return 0;
}