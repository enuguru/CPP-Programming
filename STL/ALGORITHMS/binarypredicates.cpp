
 // algorithm, predicate

#include <iostream>

#include <string>

#include <deque>

#include <algorithm>

using namespace std;

 

class Person

{

    public:

        string firstname() const;

        string lastname() const;

        ...

};

 

// binary function predicate: returns whether a person is less than another person

bool SortCriterion(const Person& p1, const Person& p2)

{

    // a person is less than another person, if the last name is less, if the last name is equal and the first name is less

    return p1.lastname()<p2.1astname() || (!(p2.1astname()<p1.lastname()) &&

    p1.firstname()<p2.firstname());

}

 

int main()

{

    deque<Person> deq1;

    ...

    sort(deq1.begin(), deq1.end(), SortCriterion);

    ...

}
