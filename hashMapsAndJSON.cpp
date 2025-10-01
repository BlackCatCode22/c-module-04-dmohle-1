// hashMapsAndJSON.cpp
// dH 10/1//25
//
// demo program for C++ class at Fresno City College

#include <iostream>
#include <json.hpp>
#include <unordered_map>
#include <map>
#include <json.hpp>



using json = nlohmann::json;
using namespace std;

int main() {
    cout << "\n Welcome to JSON! \n" << endl;

    // create a JSON object
    json myStuList = {
        {"Arturo", 1234},
        {"Blake", 5432}
    };

    // Access the values like a hash map
    cout << "\n Arturo: (this is the key/value pair's value)" << myStuList["Arturo"] << endl;
    cout << "\n Blake's student ID: " << myStuList["Blake"] << endl;

    // Create a C++ hash map that uses three student names as keys and int values for
    // their test scores - name (string) : score (int)

    unordered_map<string, int> myStudentTestScores;

    myStudentTestScores["Arturo"] = 100;
    myStudentTestScores["Blake"] = 99;
    myStudentTestScores["Anthony"] = 88;

    cout << "\n Arturo's score is: " << myStudentTestScores["Arturo"] << endl;
    cout << "\n Blake's score is: " << myStudentTestScores["Blake"] << endl;
    cout << "\n Anthony's score is: " << myStudentTestScores["Anthony"] << endl;

    // Loop thru my hash map with a C++ programming idiom!
    for (auto &pair : myStudentTestScores) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // create an ordered hash map using map
    map<string, int> myOrderedStudentTestScores;
    myOrderedStudentTestScores["Arturo"] = 100;
    myOrderedStudentTestScores["Blake"] = 99;
    myOrderedStudentTestScores["Anthony"] = 88;

    // output the ordered list
    int myPairInt = 1;
    for (auto &pair : myOrderedStudentTestScores) {
        cout << "\n Pair number " << myPairInt << " is: " << pair.first << ": " << pair.second << endl;
        myPairInt++;
    }

    return 0;
}