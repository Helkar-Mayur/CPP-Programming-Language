#include <iostream>

using namespace std;

struct singleElementDouble
{
    double Double;
};

int main()
{
    struct singleElementDouble singleElementDoubleVar;

    cout << "Structure Value with its Size and Address with its Size ::" << endl;
//    cout << "Value :: singleElementDoubleVar : " << singleElementDoubleVar << endl; // error: no match for 'operator<<' (operand types are 'std::basic_ostream<char>' and 'singleElementDouble')
    cout << "Address :: &singleElementDoubleVar : " << &singleElementDoubleVar << endl;
    cout << "Value Size :: sizeof(singleElementDoubleVar) : " << sizeof(singleElementDoubleVar) << endl;
    cout << "Address Size :: sizeof(&singleElementDoubleVar) : " << sizeof(&singleElementDoubleVar) << endl;

    cout << endl << endl;

    cout << "Structure Element Value with its Size and Address with its Size ::" << endl;
    cout << "Value :: singleElementDoubleVar.Double : " << singleElementDoubleVar.Double << endl;
    cout << "Address :: &singleElementDoubleVar.Double : " << &singleElementDoubleVar.Double << endl;
    cout << "Value Size :: sizeof(singleElementDoubleVar.Double) : " << sizeof(singleElementDoubleVar.Double) << endl;
    cout << "Address Size :: sizeof(&singleElementDoubleVar.Double) : " << sizeof(&singleElementDoubleVar.Double) << endl;

    return 0;
}
