#include <iostream>

class Stove{
    private:
        int wattage = 1000;

    public:
        int temperature = 0;
    int getWattage(){
        return wattage;
    };
    void setWattage(int wattage){
        if (wattage < 0){
            this->wattage = 0;
        }
        else if(wattage >= 3000){
            this->wattage=3000;
        }
        else {
        this->wattage = wattage;
        }
    }
    
};

int main(){
    // Abstraction = hiding unnecessary data from outside a class
    // getter = function that makes a private attribute READABLE
    // setter = function that makes a private attribute WRITABLE
    Stove stove;
    stove.temperature = 100; // man kan ändra eftersom den är i public
    // stove.wattage = 100; // denna producerar ett error eftersom man inte kan ändra en variabel i private
    std::string name = "hellooo";
    std::cout<<stove.getWattage(); // Använder en getter för att läsa av innehållet på wattage
    std::cout<<std::endl<<stove.getWattage(); // Använder en getter för att läsa av innehållet på wattage

}
