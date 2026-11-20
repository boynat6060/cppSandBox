#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int word[7] = {5,3,1,8,0,0,8};
    for (int num : word) {
        cout << num << endl;
    }
    cout << endl;
    for (int i = 0; i < 7; i++) {
        cout << word[i] << endl;
    }
    return 0;
}
