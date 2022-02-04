#include <iostream>
using namespace std;
#include <string>

// Put the person struct here

struct person{

    string FirstName;
    string LastName;

};




int main() {
	// Create two instances of person here, and assign the names.

    person a;
    a.FirstName = "Dorian";
    a.LastName = "Grey";

    person b;
    b.FirstName = "Charlie";
    b.LastName = "brown";

	// Add the prints here


    cout << a.FirstName << ", " << a.LastName << endl;
    cout << b.FirstName << ", " << b.LastName << endl;


	return 0;
}
