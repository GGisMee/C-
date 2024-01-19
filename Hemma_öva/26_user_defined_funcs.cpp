#include <iostream>
using namespace std;
void happybday(string who); // declared before main

int main(){
    string name = "Cool dude";
    happybday(name);
    

}
void happybday(string who){
    for (int i=0;i<3;i++){
        cout<<"Happy new year: "<<who<<endl;
    }
}