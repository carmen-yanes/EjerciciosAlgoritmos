#include <iostream>
using namespace std;

struct addressStruct{
    string state, city,;
};

struct person{
    string name;
    int age;
    addressStruct address;
};

int main(void){
    person p;

    p.name = "Carmen";
    p.age = 19;

    p.address.city = "Mejicanos";
    p.address.state = "San Salvador";

    person* algorithmClass = NULL;
    algorithmClass = new person[2];

    algorithmClass[0].name = "Carmen";
    algorithmClass[0].age = 19;

    algorithmClass[0].address.city = "Mejicanos";
    algorithmClass[0].address.state = "San Salvador";


    // *. ->

    (algorithmClass + 1)->name = "Diego";
    (algorithmClass + 1)->age = 21;

    (algorithmClass + 1)->address.city = "Ayutuxtepeque";
    (algorithmClass + 1)->address.state = "San Salvador";
    
    return 0;
}