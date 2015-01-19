/* 
 * File:   main.cpp
 * Author: R135352AA
 *
 * Created on January 14, 2015, 10:57 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */

bool EnterRegNum() {
    string regNum;
    try {
        cout << "Enter Registration Number...";
        getline(cin, regNum);
        if ((regNum.length()) != 8)
            throw 10;
        cout << "Ok! Valid Registration number" << endl;
        return 1;
    } catch (int err) {
        cout << "Invalid Registration Number" << endl;
        return 0;
    }
}

bool Intake() {
    string intake;
    try {
        cout << "Enter intake Number...";
        getline(cin, intake);
        if ((intake.length()) != 8)
            throw 10;
        cout << "Ok! Valid intake number" << endl;
        return 1;
    } catch (int err) {
        cout << "Invalid intake Number" << endl;
        return 0;
    }
}
void CheckAddress(int houseNumber, string streetName)throw (string) {
    try {
        if (houseNumber < 0)
            throw 100;
        if ((streetName.length()) > 10)
            throw 'error';
    } catch (int err) {
        cout << "house number should be a positive" << endl;
    } catch (string) {
        cout << "street name too long" << endl;
    }
}
int main() {
    string name;
    cout << "enter name" << endl;
    getline(cin, name);


    bool valid;
    while (valid == 0) {
        valid = EnterRegNum();
    }

    bool validInt;
    while (validInt == 0) {
        validInt = Intake();
    }
    CheckAddress(-10,"a very long name");
   
}





