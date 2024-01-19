#include <iostream>
using namespace std;
int main(){
    int16_t num = 4;
    int16_t guess;
    int guesses;
    do { // som vanligt med while(){...}, men nu kör den en gång före den börjar while loopen
        guesses++;
        cin>>guess;
    } while (guess != num);
    

}