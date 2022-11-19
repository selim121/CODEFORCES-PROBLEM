#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int x=0,y=0,la,lb;
       string a,b;
       cin>>a>>b;
       if(a == b){
           cout<<"="<<endl;
       }
       else if(a.back() != b.back()){
           if(a.back() < b.back()){
               cout<<">"<<endl;
           }else{
               cout<<"<"<<endl;
           }
       }
       else if(a.back() == 'S'){
           if(a.size() > b.size()){
               cout<<"<"<<endl;
           }else{
               cout<<">"<<endl;
           }
       }else{
           if(a.size()<b.size()){
               cout<<"<"<<endl;
           }else{
               cout<<">"<<endl;
           }
       }
    }
	return 0;
}