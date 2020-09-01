#include <iostream>
using namespace std;

int getMax(int, int);

int main(void){
    auto integer1 = 1, integer2 = 2;
    auto doubleVar = 12.347823749243;
    auto stringVar = "Carmen";

    auto function = getMax;
    cout<< function(4,8)<<endl;

    return 0;
}

int getMax(int a, int b){
    return a>=b ? a:b;
}
