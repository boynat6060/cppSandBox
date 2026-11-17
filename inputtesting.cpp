//program with a storefront and dollar amount
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << fixed << setprecision(2);
	double wallet = 20.00;
    string item1 = "Apples";
    double price1 = 4.99;
    string item2 = "Candy";
    double price2 = 10.99;
    string item3 = "Milk";
    double price3 = 5.99;
    
    cout << "Welcome.  You have " << wallet << " dollars avaible to spend.\n";
    cout << "What would you like to purchase?  Your options are:\n" << item1 << " are " << price1 << "\n" << item2 <<  " is " << price2 << "\n" << item3 << " is " << price3 << "\n";
    
    double purchase;
    cout << "Enter price of purchase:  ";
    cin >> purchase;
    
    double newWallet = wallet - purchase;
    
    cout << "Thank you.\n" << "You have " << newWallet << " dollars left to spend.\n";
    cout << "Goodbyte";
    
    return 0; //exit program
}