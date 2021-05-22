#include <iostream>
#include <string>

using namespace std;

/**
* Programmer: Reno Redaja
* Date of Creation: November 10, 2020
* Due Date: November 27, 2020 @ 11:55PM
* Class: ICS-212-0 [WIN.60187.FA20]
* 
* Homework #8
* 
* Person class defintion.
* This is a simple object class, which in this 
* case we are creating a Person.
**/

class Person {

    ///////////////////////////////
    ////// Private Variables //////
    ///////////////////////////////
    private:
    string firstName; //First name
    string lastName; //Last name
    double weight; //Weight in kilograms(kg)
    double height; //Height in centimeters(cm)
    int age; //Age of Person
    bool gender; //Gender: true = male, false = female
    int pets; //Amount of pets 
    string origin; //Place of origin (country)
    string job; //Occupation
    int birthYear; //Year of birth
    int shoeSize; //Shoe size
    string shirtSize; //Size of shirt: SMALL, MEDIUM, LARGE
    bool isHappy; //Person is happy: true = happy, false = not happy
    int kids; //Amount of kids
    string favColor; //Favorite color
    static int numOfPersons; //counter: number of persons

    ////////////////////////////////
    /// Public Getters & Setters ///
    ////////////////////////////////
    public:
    /*
    * Get first name.
    * Returns a string of first name.
    */ 
    string getfirstName() {
        return firstName; 
    } //end getFirstName

    /*
    * Get last name.
    * Returns a string of last name.
    */
    string getlastName() { 
        return lastName;
    } //end getlastName

    /*
    * Get weight.
    * Returns a double of weight.
    */
    double getWeight() { 
        return weight;
    } //end getWeight

    /*
    * Get height.
    * Returns a double of height.
    */
    double getHeight() { 
        return height;
    } //end getHeight

    /*
    * Get age.
    * Returns a integer of age.
    */
    int getAge() { 
        return age;
    } //end getAge

    /*
    * Get birth year.
    * Returns a integer of birth year.
    */
    int getBirthYear() {
        return birthYear;
    } //end getBirthYear

    /*
    * Get gender.
    * Returns a boolean of gender.
    * True = male
    * False = female
    */
    bool getGender() { 
        return gender;
    } //end getGender

    /*
    * Get nunber of persons.
    * Returns a integer of number of perosons created.
    */
    static int getNumofPersons() { 
        return numOfPersons;
    } //end getNumofPersons

    /*
    * Set first name.
    * Set private variable (firstName) to parameter (fName).
    */
    void setfirstName(string fName) { 
        firstName = fName;
    } //end setfirstName

    /*
    * Set last name.
    * Set private variable (lastName) to parameter (lName).
    */
    void setlastName(string lName) { 
        lastName = lName;
    } //end setlastName

    /*
    * Set weight.
    * Set private variable (weight) to parameter (kg).
    */
    void setWeight(double kg) { 
        if (kg <= 0) {
            cout << "Invalid input.\nWeight cannot be <= 0.\nTry again." << endl;
        } else {
            weight = kg;
        }
    } //end setWeight

    /*
    * Set height.
    * Set private variable (height) to parameter (cm).
    */
    void setHeight(double cm) {
        if (cm <= 0) {
            cout << "Invalid input.\nHeight cannot be <= 0.\nTry again." << endl;
        } else {
            height = cm;
        }
    } //end setHeight

    /*
    * Set age.
    * Set private variable (age) to parameter (personAge).
    */
    void setAge(int personAge) {
        if (age <= 0) {
            cout << "Invalid input.\nAge cannot be <= 0.\nTry again." << endl;
        } else {
            age = personAge;
        }
    } //end setAge

    /*
    * Set birth year.
    * Set private variable (birthYear) to parameter (bYear).
    */
    void setBirthYear(int bYear){
        if (bYear <= 0) {
            cout << "Enter a valid birth year." << endl;
        } else {
            birthYear = bYear;
        }
    } //end getBirthYear

    /*
    * Set gender.
    * Set private variable (gender) to parameter (mf).
    */
    void setGender(bool mf) { 
        gender = mf; 
    } //end setGender

    ///////////////////////////////
    /////////// Methods ///////////
    ///////////////////////////////
    Person();                               //Default Person constructor
    ~Person();                              //Deconstructor method
    Person(string, string);                 //Person constructor overload
    Person(string, string, int);            //Person constructor overload
    Person(string, string, double, double); //Person constructor overload
    void toString();                        //Print method

    /*
    * METHOD OVERLOADING & VIRTUAL METHODS
    * (HW#9 & HW#11)
    */
    virtual int hasKids(int);               //Has kids method (Virtual HW#11)
    double hasKids(double);                 //Has kids method (Method Overloading HW#9)
    int whatSize(int);                      //What size method (Virtual HW#11)
    virtual string whatSize(string);        //What size method (Method Overloading HW#9)
}; // end Person class

/*
* Counter for number of Persons. 
*/
int Person::numOfPersons = 0;

/*
* Default Person constructor.
* Counts amount of Person objects created.
*/
Person::Person() {
    this->firstName = "First name";
    this->lastName = "Last name";
    Person::numOfPersons++;
} //end Person

/*
* Person destrcutor method.
*/
Person::~Person() {
    cout << "Person destroyed" << endl;
} //end ~Person

/*
* Person constructor. Constructor Overload.
* Creates a Person object that 
* sets first name and last name.
* 
* Arguments:
* string first name
* string last name
*/
Person::Person(string fName, string lName) {
    this->firstName = fName;
    this->lastName = lName;
    Person::numOfPersons++;
} //end Person

/*
* Person constructor. Constructor Overload.
* Creates a person object that sets the 
* first name, last name, and year of birth.
*
* Arguments:
* string first name
* string last name
* int birth year
*/
Person::Person(string fName, string lName, int bYear) {
    this->firstName = fName;
    this->lastName = lName;

    if (bYear < 0) {
        cout << "Enter a valid birth year." << endl;
    } else {
        this->birthYear = bYear;
    }
    Person::numOfPersons++;
} //end Person

/*
* Person constructor. Constructor Overload.
* Creates a Person object that sets the
* first name, last name, weight, and height.
* 
* Arguments:
* string first name
* string last name
* double weight
* double height
*/
Person::Person(string fName, string lName,
               double weight, double height) {
    this->firstName = fName;
    this->lastName = lName;

    if (weight <= 0 && height <= 0) {
        cout << "Invalid input. \nHeight & weight cannot be <= 0. \nTry again." << endl;
    } else {
        this->weight = weight;
        this->height = height;
    }
    Person::numOfPersons++;
} //end Person

/*
* To string method that prints Person data.
*/
void Person::toString() {
    cout << this->firstName << " " << this->lastName << " ";
} //end toString