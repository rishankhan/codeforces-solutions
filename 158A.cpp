#include <iostream>
using namespace std;
    int main(){
    int n,k,s,q=0,point[100];
    cin>>n>>k;
    for(int i=0;i<=(n-1);i++){
        cin>>s;
        point[i] = s;
    }
    for(int j=0;j<=(n-1);j++){
        if((point[j]>=point[k-1]) && point[j] > 0){
            q++;
        }
    }
    cout<<q<<endl;
}
