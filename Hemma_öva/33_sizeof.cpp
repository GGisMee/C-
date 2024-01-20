#include <iostream>
using namespace std;

int main(){    
    // sizeof() = determins the size in bytes of variable, data type, class, obj, etc
    double merit = 20.693;
    float merit2 = 12.545454;
    string name = "Georg Stiernheilm";
    char grade = 'A';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    string students[] = {"Bob", "William", "Ventadorn"};

    cout<<sizeof(merit)<<" bytes\n";
    cout<<sizeof(merit2)<<" bytes\n";
    cout<<sizeof(name)<<" bytes\n";
    cout<<sizeof(grade)<<" bytes\n";;
    cout<<sizeof(student)<<" bytes\n";;
    cout<<sizeof(grades)<<" bytes\n";;
    cout<<sizeof(grades)/sizeof(char)<<" elements\n";
    cout<<sizeof(students)/sizeof(string)<<" elements\n";
    return 0;
}
