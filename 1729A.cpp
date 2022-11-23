#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a = min(n,2);
        int b = min(m,2);
        cout<<a<<" "<<b<<endl;
    }

    return 0;
}