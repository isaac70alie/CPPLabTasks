#include "Person.h"

// Default constructor
Person::Person() : mWeight(0.0), mFirstName(""), mAge(0) {}

// Parameterized constructor
Person::Person(const string& newFirstName, float newWeight) 
    : mFirstName(newFirstName), mWeight(newWeight), mAge(0) {}

// Destructor
Person::~Person() {}

// Overload the add operator
float Person::operator + (const Person& otherPerson) {
    return this->mWeight + otherPerson.mWeight;
}

// Overload the relational operators using mFirstName
bool Person::operator == (const Person& otherPerson) const {
    return this->mFirstName == otherPerson.mFirstName;
}

bool Person::operator != (const Person& otherPerson) const {
    return this->mFirstName != otherPerson.mFirstName;
}

// Overload the relational operators using mAge
bool Person::operator < (const Person& otherPerson) const {
    return this->mAge < otherPerson.mAge;
}

bool Person::operator > (const Person& otherPerson) const {
    return this->mAge > otherPerson.mAge;
}

// Conversion operators
Person::operator int () {
    return mAge;
}

Person::operator string () {
    return mFirstName;
}

Person::operator float () {
    return mWeight;
}
