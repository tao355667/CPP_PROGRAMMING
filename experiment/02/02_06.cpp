#include <iostream>
using namespace std;

class Monitor
{
public:
    Monitor(char t) : type(t) {}
    void display() { cout << "The type of monitor is " << type << endl; }

private:
    char type;
};

class Computer
{
public:
    Computer(int i, char c) : id(i), mon(c) {}
    void Display()
    {
        cout << "The computer is " << id << endl;
        mon.display();
    }

private:
    int id;
    Monitor mon;
};

int main()
{
    Computer myComputer(101, 'B');
    myComputer.Display();
    return 0;
}