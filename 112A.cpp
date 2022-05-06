#include <iostream>
using namespace std;
int main() {
    string a,b;
    cin>>a;
    cin>>b;
    for(int i=0;i<a.size();i++){
        if(a[i]<=90){
            a[i] += 32;
        }
        if(b[i]<=90){
            b[i] += 32;
        }
    }
    if(a<b){
        cout<<-1<<endl;
    }
    else if(b<a){
        cout<<1<<endl;
    }
    else if(a==b){
        cout<<0<<endl;
    }
    return 0;
}
