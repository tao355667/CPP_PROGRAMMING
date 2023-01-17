#include <iostream>

using namespace std;

class Animal
{

public:
    virtual char *getType() const { return "Animal"; }

    virtual char *getVoice() const { return "Voice"; }
};

class Dog : public Animal
{

public:
    char *getType() const { return "Dog"; }

    char *getVoice() const { return "Woof"; }
};

void type(Animal &a) { cout << a.getType(); }

void speak(Animal a) { cout << a.getVoice(); }

int main()
{

    Dog d;
    type(d);
    cout << "Speak";
    speak(d);
    cout << endl;

    return 0;
}