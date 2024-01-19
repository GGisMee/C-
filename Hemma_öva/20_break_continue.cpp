#include <iostream>
using namespace std;
int main(){
    string name = "";
    for (int i=0;i<10;i++){
        if (i==4){
            continue; // continue skippar den gången, break bryter loopenw
        }
        cout<<"Happy new year:"<<i<<"time\n";

    }
    

}