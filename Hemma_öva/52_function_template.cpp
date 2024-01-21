#include <iostream>
using namespace std;

template <typename T, typename U> // could also have one template T, U is just to allow comparison between ex a double and an integer
auto max_func(T x, U y){ // instead of using ex int, lets use T for thing
    return (x>y ? x : y);
}
// Instead of using T or U as the type you can use auto which finds the class that it should be


// instead of creating overloaded functions which all do the same thing, 
// but take different inputs such as int, floats, doubles
// you can

int main(){    
    // function template = describes what a function looks like
    std::cout<<max_func(5, 21.4)<<"\n";

}
