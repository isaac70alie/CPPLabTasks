#pragma once
#include <string>
using namespace std;

class Person {
public:
    Person();
    Person(const string& newFirstName, float newWeight);

    ~Person();

    // Overload the add operator
    float operator + (const Person& otherPerson);

    // Overload the relational operators using mFirstName
    bool operator == (const Person& otherPerson) const;
    bool operator != (const Person& otherPerson) const;

    // Overload the relational operators using mAge
    bool operator < (const Person& otherPerson) const;
    bool operator > (const Person& otherPerson) const;

    // Conversion operators
    operator int ();
    operator string ();
    operator float ();

private:
    float mWeight;
    string mFirstName;
    int mAge;
};
