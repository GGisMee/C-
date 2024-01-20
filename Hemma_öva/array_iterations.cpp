#include <iostream>
using namespace std;

int main(){
    string students[] = {"Viggo", "Liam", "Allie", "Henrik"};

    // way 1
    for (int i = 0; i< sizeof(students)/sizeof(string); i++){
        cout<<students[i]<<endl;
    }
    cout<<endl;
    // way 2, 
    for (string student : students){
        cout<<student<<endl;
    }


}