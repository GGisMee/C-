#include <iostream>
using namespace std;

// have different versions of a function
void bakePizza();
void bakePizza(string topping1);
void bakePizza(string topping1, string topping2);
// must have different signatures (name and parameters)
// so by changing name/parameters you can create a new function

int main(){    
    bakePizza();
    bakePizza("marchmellows");
    bakePizza("grass", "champinions");
}
void bakePizza(){
    cout<<"Pizza baking!\n";
}
void bakePizza(string topping1){
    cout<<"Here is your "<<topping1<<"pizza\n";
}

void bakePizza(string topping1, string topping2){
    cout<<"Here is your "<<topping1<<"pizza with extra "<<topping2<<"\n";
}