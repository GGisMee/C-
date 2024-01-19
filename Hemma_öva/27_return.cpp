#include <iostream>
using namespace std;

string concat(string s1, string s2);

int main(){
    string fn = "Olle";
    string sn = "Cervantes";
    cout<<concat(fn,sn);

    

}
string concat(string s1, string s2){
    return s1+" de "+s2;
}