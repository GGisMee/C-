#include <iostream>
#include <list>

bool divisible(int numerator, int denominator);
void runThrough(std::list<int> &list, const int denominator);
void show(std::list<int> &list);


int main(){
    int highest_prime;
    highest_prime = 10000;
    std::list<int> listPrimes;
    int lastAdded = 0;
    listPrimes.push_back(1);
    listPrimes.push_back(2);
    std::list<int> filterPrimes;
    for (int i=3; i!=highest_prime+1; i++){
        filterPrimes.push_back(i);
    }

    while (filterPrimes.front() != 0){
        runThrough(filterPrimes, listPrimes.back());
        listPrimes.push_back(filterPrimes.front());
    }
    listPrimes.remove(0);
    show(listPrimes);
    

    
}
bool divisible(int numerator, int denominator){
    if (numerator%denominator == 0){return 1;}
    else {return 0;}
}
void runThrough(std::list<int> &list, const int denominator){
    for (std::list<int>::iterator it = list.begin(); it != list.end();) {
        int element = *it;

        if (divisible(element, denominator)) {
            it = list.erase(it);
        } else {
            ++it;
        }
    }
}
void show(std::list<int> &list){
    for (int element : list){
        std::cout<<element<<" ";
    }
}
