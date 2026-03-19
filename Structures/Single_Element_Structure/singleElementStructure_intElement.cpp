#include <iostream>

using namespace std;

struct singleElementInt
{
    int Int;
};

int main()
{
    struct singleElementInt singleElementIntVar;

    cout << "Structure Value with its Size and Address with its Size ::" << endl;
//    cout << "Value :: singleElementIntVar : " << singleElementIntVar << endl; // error: no match for 'operator<<' (operand types are 'std::basic_ostream<char>' and 'singleElementInt')
    cout << "Address :: &singleElementIntVar : " << &singleElementIntVar << endl;
    cout << "Value Size :: sizeof(singleElementIntVar) : " << sizeof(singleElementIntVar) << endl;
    cout << "Address Size :: sizeof(&singleElementIntVar) : " << sizeof(&singleElementIntVar) << endl;

    cout << endl << endl;

    cout << "Structure Element Value with its Size and Address with its Size ::" << endl;
    cout << "Value :: singleElementIntVar.Int : " << singleElementIntVar.Int << endl;
    cout << "Address :: &singleElementIntVar.Int : " << &singleElementIntVar.Int << endl;
    cout << "Value Size :: sizeof(singleElementIntVar.Int) : " << sizeof(singleElementIntVar.Int) << endl;
    cout << "Address Size :: sizeof(&singleElementIntVar.Int) : " << sizeof(&singleElementIntVar.Int) << endl;

    return 0;
}
