#include <iostream>
using namespace std;
int main() {
    int problem,petya,vasya,tonya,sol=0;
    cin>>problem;
    while(problem--){
        cin>>petya>>vasya>>tonya;
        if((petya+vasya+tonya)>=2){
            sol++;
        }
    }
    cout<<sol<<endl;
    return 0;
}
