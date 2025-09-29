//
// Created by BE129 on 9/29/2025.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    fstream myFile;
    myFile.open("dennis.txt", ios::out);
    if (myFile.is_open()) {
        myFile << "\n Hello from my file writing program";
        myFile << "\n This is a new line";
        myFile.close();
    }

    fstream myFile02;

    myFile02.open("C:/Users/BE129/cStuff/dataFiles/arrivingAnimals.txt", ios::in);

    if (myFile02.is_open()) {
        // Use a while loop to read this file line by line
        string myLine;
        while (getline(myFile02,myLine)) {
            cout << myLine << endl;
        }

        myFile02.close();
    }

    // C:/Users/BE129/cStuff/dataFiles/arrivingAnimals.txt


    // Test to see if the file was actually created.
    if (myFile) {
        cout <<  "\n File dennis.txt successfully created in the cmake-build-debug\n";
    }





}