#include <iostream>
using namespace std;

class baseClass {
public:
    virtual void perkenalan() {

        cout << "Hallo saya Function dari base class";

    }
}; 

class derivedCLass : public baseClass {
public:
    void perkenalan() {
        cout << "Hallo saya Function dari derived class";

    }
};


int main()
{
    derivedCLass a;
    a.perkenalan();

    return 0;
} 