#include <iostream>
using namespace std;

void parameterAsReference(int&);
void parameterAsReferencePtr(int*);
void parameterAsValue(int);


int main(void){
    int variable = 20;
    int* pointer = NULL;

    // pointer = 45; ERROR

    pointer = &variable;
    cout<<"Mem address: "<< pointer << endl;
    cout<<"Contained value: "<< *pointer << endl << endl;

    int** pointerToPointer = NULL; 
    pointerToPointer = &pointer; 

    cout<<"DoublePointer mem address: " << pointerToPointer << endl;
    cout<<"Mem address contained in PointerToPointer: " << *pointerToPointer << endl;
    cout<<"Value contained in pointing mem address mem address: " << **pointerToPointer << endl << endl;

    int*** triplePointer = NULL; 
    triplePointer = &pointerToPointer; 

    cout<<"TriplePointer mem address: " << triplePointer << endl;
    cout<<"Mem address contained in triplePointer: " << *triplePointer << endl;
    cout<<"Value contained in pointing mem address mem address: " << **triplePointer << endl;
    cout<<"***: " << ***triplePointer << endl << endl;

    cout<<"Value before parameterAsReference: "<<variable<<endl;
    parameterAsReference(variable);
    cout<<"Value after parameterAsReference: "<<variable<<endl<<endl;

    cout<<"Value before parameterAsReferencePtr: "<<variable<<endl;
    parameterAsReferencePtr(&variable);
    cout<<"Value after parameterAsReferencePtr: "<<variable<<endl<<endl;

    cout<<"Value before parameterAsValue: "<<variable<<endl;
    parameterAsValue (variable);
    cout<<"Value after parameterAsValue: "<<variable<<endl<<endl;

    return 0;
}

void parameterAsReference(int& ref){
    cout <<"Value in function: " <<(ref *= 2)<<endl;
}

void parameterAsReferencePtr(int* ptr){
    cout <<"Value in function: " <<(*ptr *= 2)<<endl;
}

void parameterAsValue(int val){
    cout <<"Value in function: " <<(val *= 2)<<endl; 
}