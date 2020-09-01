#include <iostream>
#include <functional>

using namespace std;

struct storedLambdas {
    function<int(int, int)> getMin, getMax;
};

int main(void){
    /*
    []: lambda begin
    {}: parameters (optional)
    -> type: return type (optional)
    {
        lambda body
    }
    */

    auto parameterlessLambda = []() -> string{
        return "Parameterless lambda";
    };

    auto lambda = [](string name){
        cout<<name<<" is greeting you"<<endl; 
    };

    cout << parameterlessLambda()<<endl;
    lambda("Carmen");

    storedLambdas sl;

    sl.getMin = [](int a, int b) -> int {
        return a <= b ? a:b;
    };

    sl.getMax = [](int a, int b) -> int {
        return a >= b ? a:b;
    };

    cout<<sl.getMin(5,9)<<endl;

    return 0;
}