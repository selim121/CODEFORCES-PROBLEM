#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int m = 7 - max(a,b);
    int n = __gcd(m,6);
    cout<<m/n<<"/"<<6/n<<endl;
    return 0;
}