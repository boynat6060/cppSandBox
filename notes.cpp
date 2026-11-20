#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    //for loop for printing an array
    int myNum[7] = {5,3,1,8,0,0,8};
    for (int i = 0; i < 7; i++) {
        //FOR loop increments i, so you use i as the index number.
        cout << myNum[i] << endl;
    }
    cout << "\n" << "clear\n" << "\n";
    for (int i : myNum) {
        //FOREACH loop puts the value of each index on I.  You just print i, not array[i].
        cout << i << endl;
    }

    //arrays can be defined with a given length - array[5] OR without a lengh - array[].  
    //if you do not define a length, you can not assign values to indexes later, it must be done at declaration.
    //these are the same:
    int testNum[5] = {1,2,3,4,5};
    int testNum2[] = {1,2,3,4,5};

    //sizeof(array) returns the number of bytes in that array, not the number of elements.
    //divide sizeof(array) by sizeof(array[0]) to get number of elements.
    //this works because you are dividing the total btyes by the amount of bytes in one element.
    int sizeTest1 = sizeof(testNum);
    int arrayLenth = sizeof(testNum) / sizeof(testNum[0]);
    cout << "testNum is " << sizeTest1 << ".  The array has " << arrayLength << "elements." << endl;
}