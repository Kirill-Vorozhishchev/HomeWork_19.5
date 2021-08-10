#include <iostream>

using namespace std;

class Animal
{
private:
    int x;
public:
    virtual void Voice()
    {
        std::cout << "Animal Class" << '\n';
    }
};


class Dog : public Animal
{
private:
    double y;
public:
    void Voice() override
    {
        std::cout << "Woof!" << '\n';
    }
};


class Cat : public Animal
{
private:
    double z;
public:
    void Voice() override
    {
        std::cout << "Meow!" << "\n";
    }
};


class Hamster : public Animal
{
private:
    double w;
public:
    void Voice() override
    {
        std::cout << "beeps!";
    }
};


int main()
{
    Animal* p1 = new Dog;
    Animal* p2 = new Cat;
    Animal* p3 = new Hamster;

    Animal* nArr[] = { p1,p2,p3 };
    for (int i = 0; i < 3; i++)
    {
        nArr[i]->Voice();
    }
    

    return 0;
}