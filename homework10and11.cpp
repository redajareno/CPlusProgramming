#include <iostream>
#include <string>

using namespace std;

/**
* Programmer: Reno Redaja
* Date of Creation: November 10, 2020
* Due Date: November 27, 2020 @ 11:55PM
* Class: ICS-212-0 [WIN.60187.FA20]
* 
* Homework #10 & Homework #11
* 
* This file will demonstrate inheritence and
* add functionality to methods for polymorphism.
* It will contain sub-classes that will inherit
* from Homework #8 file and show virtual functions from the methods:
* 1.) hasKids()
* 2.) whatSize()
*
**/

class Soldier : public Person {

    ///////////////////////////////
    ////// Private Variables //////
    ///////////////////////////////
    private:
    int idNum; //I.D. Number
    string rank; //Rank
    string location; //Location
    bool retired; //Retired: true = retired, false = not retired
    int numOfKills; //Number of kills
    int soldierKids; //Amount of kids a soldier has
    string soldierShirtSize; //Soldier's size of shirt

    ////////////////////////////////
    /// Public Getters & Setters ///
    ////////////////////////////////
    public:
    /*
    * Get ID number of Soldier.
    * Returns an intger of ID number.
    */
    int getIDNum() {
        return idNum;
    } //end getIDNum

    /*
    * Get rank of Soldier.
    * Returns a string of rank.
    */
    string getRank() {
        return rank;   
    } //end getRank

    /*
    * Get location of Soldier.
    * Returns a string of location.
    */
    string getLocation() {
        return location;
    } //end getLocation

    /*
    * Get retired.
    * Returns a boolean if Soldier is retired.
    * True = retired
    * False = not retired
    */
    bool getRetired() {
        return retired;
    } //end getRetired

    /*
    * Set ID number of Soldier.
    * Set private variable (idNum) to parameter (soldierIDNum).
    */
    void setIDNum(int soldierIDNum) {
        idNum = soldierIDNum;
    } //end setIDNum

    /*
    * Set rank of Soldier.
    * Set private variable (rank) to parameter (soldierRank).
    */
    void setRank(string soldierRank) {
        rank = soldierRank;   
    } //end setRank

    /*
    * Set location of Soldier.
    * Set private variable (location) to parameter (soldierLocation).
    */
    void setLocation(string soldierLocation) {
        location = soldierLocation;
    } //end setLocation

    /*
    * Set retired of Soldier.
    * Set private variable (retired) to parameter (soldierRetired).
    */
    void setRetired(bool soldierRetired) {
        retired = soldierRetired;
    } //end setRetired

    ///////////////////////////////
    /////////// Methods ///////////
    ///////////////////////////////
    Soldier();                            //Default Soldier constructor
    Soldier(string, string, int, string); //Soldier constructor overload
    void toString();                      //To string method

    int hasKids(int);                     //Has kids method (Virtual HW#11)
    string whatSize(string);              //What size method (Virtual HW#11)
};

/*
* Default Soldier Constructor.
* Creates a default Soldier.
*/ 
Soldier::Soldier() {
        this->idNum = 0;
        this->rank = "Rank";
        this->location = "Location";
} //end default Soldier constructor

/*
* Soldier Constructor. Constructor Overload. 
* Superset to Person class.
*
* Arguments:
* string first name
* string last name
* int ID number
* string rank
*/
Soldier::Soldier(string fName, string lName, int IDNum, string rank) : Person(fName, lName) {
    this->idNum = IDNum;
    this->rank = rank;
} //end Soldier constructor (superset to Person)

/*
* Soldier to string method.
* Prints out the first name, last name, 
* ID number, and rank of Soldier.
*/
void Soldier::toString() {
    cout << this->getfirstName() << " " << this->getlastName() << "'s ID Number: " << this->idNum << " and rank is: " << this->rank << endl;
} //end Soldier toString method

/*
* Soldier Has kids method. (Virtual HW#11)
* This method determines amount of kids a 
* Soldier has.
*
* Arguments:
* int soldierKids
* 
* Returns:
* amount of kids 
*/
int Soldier::hasKids(int soldier_Kids) {
    if (soldier_Kids < 0) {
        cout << "Invalid. \nCan't have negative amount of kids. \nTry again." << endl;
    } else {
        this->soldierKids = soldier_Kids;
    }
    return soldier_Kids;
} //end Soldier hasKids method

/*
* Soldier What size method. (Virtual HW#11)
* This method determines the shirt
* size of Soldier. User must enter string only.
*
* Sizes:
* Small
* Medium
* Large
*
* Arguments:
* string soldierShirtSize
*
* Returns:
* Soldier's shirt size
*/
string Soldier::whatSize(string soldier_Shirt_Size) {
    string size = " is size ";
    this->soldierShirtSize = soldier_Shirt_Size;
    return size + soldier_Shirt_Size + ".";
} //end Soldier shirt size method