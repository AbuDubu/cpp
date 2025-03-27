/*
Project 1-1

this program converts feet to meters

*/

#include <iostream>
using namespace std;

int main(){

    double feet, meters;
    
    cout << "Enter the number of feet: ";
    cin >> feet;
    meters = feet / 3.28;
    cout << feet << " feet is " << meters << " meters." << endl;
    return 0;

}