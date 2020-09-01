#include <iostream>
using namespace std;

enum Color{RED, BLACK, WHITE};
string enumToString(Color c);

int main(void){
    Color c = RED;
    cout<<enumToString(c)<<endl;
    return 0;
}

string enumToString(Color c) {
    switch (c)
    {
    case RED:
        return "RED";
        break;
    case BLACK:
        return "BLACK";
        break;
    case WHITE:
        return "WHITE";
        break;
    default:
        return "Another color";
        break;
    }
}