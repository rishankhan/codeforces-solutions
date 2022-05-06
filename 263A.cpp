#include <iostream>
using namespace std;
int main() {
    int row,column,cell=0,move;
    for(row=1;row<=5;row++){
        for(column=1;column<=5;column++){
            cin>>cell;
            if(cell==1){
                move = abs(row-3)+abs(column-3);
                cout<<move;
            }
        }
    }
    return 0;
}
