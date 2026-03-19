#include <iostream>

using namespace std;

struct singleElementFloat
{
    float Float;
};

int main()
{
    struct singleElementFloat singleElementFloatVar;

    cout << "Structure Value with its Size and Address with its Size ::" << endl;
    cout << "Value :: singleElementFloatVar : " << singleElementFloatVar << endl;
    cout << "Address :: &singleElementFloatVar : " << &singleElementFloatVar << endl;
    cout << "Value Size :: sizeof(singleElementFloatVar) : " << sizeof(singleElementFloatVar) << endl;    
    cout << "Address Size :: sizeof(&singleElementFloatVar) : " << sizeof(&singleElementFloatVar) << endl;

    cout << endl << endl;

    cout << "Structure Element Value with its Size and Address with its Size ::" << endl;
    cout << "Value :: singleElementFloatVar.Float : " << singleElementFloatVar.Float << endl;
    cout << "Address :: &singleElementFloatVar.Float : " << &singleElementFloatVar.Float << endl;
    cout << "Value Size :: sizeof(singleElementFloatVar.Float) : " << sizeof(singleElementFloatVar.Float) << endl;    
    cout << "Address Size :: sizeof(&singleElementFloatVar.Float) : " << sizeof(&singleElementFloatVar.Float) << endl;

    return 0;
}