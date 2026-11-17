#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    cout << fixed << setprecision(2);
    string name;
    cout << "Enter name:  ";
    cin >> name;

    cout << "Hi " << name << endl;

    return 0;
}