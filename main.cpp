// Mad Libs Clone
#include <iostream>
#include <string>

using namespace std; 
int main() {
    // Declare Variables
    string adjective1, girlsName, adjective2, occupation1, placeName, \
            clothing, hobby, adjective3, occupation2, boysName, mansName;

    cout << "Mad Libs!" << endl;
    
    cout << "Please enter an adjective: ";
    getline(cin, adjective1);
    
    cout << "Please enter a girl's name: ";
    getline(cin, girlsName);
    
    cout << "Please enter another adjective: ";
    getline(cin, adjective2);

    cout << "Please enter an occupation: ";
    getline(cin, occupation1);

    cout << "Please enter the name of a place: ";
    getline(cin, placeName);

    cout << "Please enter the name of a plural clothing item: ";
    getline(cin, clothing);

    cout << "Please enter a hobby: ";
    getline(cin, hobby);

    cout << "Please enter another adjective: ";
    getline(cin, adjective3);

    cout << "Please enter another occupation: ";
    getline(cin, occupation2);

    cout << "Please enter a boy's name: ";
    getline(cin, boysName);

    cout << "Please enter a man's namn: ";
    getline(cin, mansName);

    // Output story
    cout << "There was once a " << adjective1 << " girl named " \
        << girlsName << " who was a " << adjective2 << " " << occupation1 \
        << " in the Kingdom of " << placeName <<". She loved to wear " \
        << clothing << " and " << hobby <<". She wanted to marry the " \
        << adjective3 << " " << occupation2 << " named " << boysName << " but her "\
        <<"father, King " << mansName  << ", forbid her from seeing him. " << endl;


    return 0;
}
