#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::getline;

int main() {
    string name;

    cout << "Welcome to your C++ Apprenticeship!\n";
    cout << "Enter your name: ";
    getline(cin, name);
    
    cout << "Great to meet you, " << name << "! Your setup is working.\n";

    return 0;
}