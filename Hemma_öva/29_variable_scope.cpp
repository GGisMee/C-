#include <iostream>
using namespace std;
void pnum();
int num = 1; // global scope
int main(){    
    cout<<num;
    int num = 2;
    cout<<num;
    pnum();
}
void pnum(){
    int num = 3;
    cout<<num;
}