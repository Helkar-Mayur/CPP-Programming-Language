#include <iostream>

using namespace std;

struct singleElementChar
{
    char Char;
};

int main()
{
//    struct singleElementChar singleElementCharVar;
    singleElementChar singleElementCharVar;

    cout << "Structure Value with its Size and Address with its Size ::" << endl;
//    cout << "Value :: singleElementCharVar : " << singleElementCharVar << endl; // error: no match for 'operator<<' (operand types are 'std::basic_ostream<char>' and 'singleElementChar')
//    cout << "Address :: &singleElementCharVar : " << &singleElementCharVar << endl;
    cout << "Address :: &singleElementCharVar : " << (void*)&singleElementCharVar << endl;
    cout << "Value Size :: sizeof(singleElementCharVar) : " << sizeof(singleElementCharVar) << endl;
    cout << "Address Size :: sizeof(&singleElementCharVar) : " << sizeof(&singleElementCharVar) << endl;

    cout << endl << endl;

    cout << "Structure Element Value with its Size and Address with its Size " << endl;
    cout << "Value :: singleElementCharVar.Char : " << singleElementCharVar.Char << endl;
//    cout << "Address :: &singleElementCharVar.Char : " << &singleElementCharVar.Char << endl;
    cout << "Address :: &singleElementCharVar.Char : " << (void*)&singleElementCharVar.Char << endl;
    cout << "Value Size :: sizeof(singleElementCharVar.Char) : " << sizeof(singleElementCharVar.Char) << endl;
    cout << "Address Size :: sizeof(&singleElementCharVar.Char) : " << sizeof(&singleElementCharVar.Char) << endl;

    return 0;
}
