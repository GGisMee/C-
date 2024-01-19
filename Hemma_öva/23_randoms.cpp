#include <iostream>
using namespace std;
int main(){
    // randoms
    //cout<<time(NULL);
    srand(time(NULL)); // seed of current second
    int num = rand() % 6 + 1; // 1-6
    cout<<num;
    
    

}