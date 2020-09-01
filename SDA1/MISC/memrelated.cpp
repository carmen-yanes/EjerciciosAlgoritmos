#include <iostream>
using namespace std;

int main(void){
    int ref = 20;
    void* ptr = &ref;

    //cout << *ptr << endl; ERROR.

    cout<<"Value contained in ptr: "<< *(int*)ptr << endl;

    char c = 'C';
    ptr = &c;
    cout<<"Value contained in ptr: "<< *(char*)ptr <<endl;
    
    // C malloc vs. C++ new 



    return 0;
}