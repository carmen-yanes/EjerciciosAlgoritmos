#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector<int> vct;

    vct.push_back(1);
    vct.push_back(2);
    vct.push_back(3);
    vct.push_back(4);
    vct.push_back(5);
    vct.push_back(6);
    vct.push_back(7);
    vct.push_back(8);
    vct.push_back(9);
    vct.push_back(0);

    vector<int>::iterator it;

    cout<<"vector: ";
    for(it=vct.begin(); it != vct.end(); it++)
        cout<< *it << "  ";
    cout<<endl; 

    it = vct.begin();

    advance(it, 3);

    vector<int> medium = {30,40,50};

    copy(medium.begin(), medium.end(), inserter(vct, it));

    cout<<"vector: ";
    for(it=vct.begin(); it != vct.end(); it++)
        cout<< *it << "  ";
    cout<<endl; 

    return 0;
}