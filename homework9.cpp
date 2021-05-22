#include <iostream>
#include <string>

using namespace std;

/**
* Programmer: Reno Redaja
* Date of Creation: November 10, 2020
* Due Date: November 27, 2020 @ 11:55PM
* Class: ICS-212-0 [WIN.60187.FA20]
* 
* Homework #9
* 
* Within this file, it contains the class definition
* from Homework #8 AND also the overloaded methods.
* The (2) overloaded methods are:
* 1.) hasKids()
* 2.) whatSize()
**/

//////////// HW#9 /////////////
///// Method Overloading //////
///////////////////////////////

/*
* Has kids method.
* This method determines amount of kids a 
* Person has.
*
* Arguments:
* int personKids
* 
* Returns:
* amount of kids
*/
int Person::hasKids(int personKids) {
    if (personKids < 0) {
        cout << "Invalid. \nCan't have negative amount of kids. \nTry again." << endl;
    } else {
        this->kids = personKids;
    }
    return personKids;
} //end hasKids

/*
* Has kids method. Method Overloading.
* Kids are also considered pets too!
* This method determines amount of pets a 
* Person has.
*
* Arguments:
* double personPets
* 
* Returns:
* amount of Pets
*/
double Person::hasKids(double personPets) {
    if (personPets < 0) {
        cout << "Invalid. \nCan't have negative amount of pets. \nTry again." << endl;
    } else {
        this->pets = personPets;
    }
    return personPets;
} //end hasKids

/*
* What size method.
* This method determines the shoe size
* of Person. There is a check statment that
* prints a message if it the size entered is 
* less than 0 or greated than 14.
*
* Arguments:
* int personShoeSize
*
* Returns:
* Person's shoe size
*/
int Person::whatSize(int personShoeSize) {
    if (personShoeSize < 0 && personShoeSize > 14) {
        cout << "Invalid shoe size. \nTry again." << endl;
    } else {
        this->shoeSize = personShoeSize;
    }
    return personShoeSize;
} //end whatSize

/*
* What size method. Method Overloading.
* This method determines the shirt
* size of Person. User must enter string only.
* Sizes:
* Small
* Medium
* Large
*
* Arguments:
* string personShirtSize
*
* Returns:
* Person's shirt size
*/
string Person::whatSize(string personShirtSize) {
    if (personShirtSize >= "0" && personShirtSize <= "9") {
        cout << "Please enter a shirt size" << endl;
    } else {
        this->shirtSize = personShirtSize;
    }
    return personShirtSize;
} //end whatSize