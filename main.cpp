#include <iostream>
#include <string>

// Visibility doesn't affect performance, it mainly helps with code readability

// Remember a class is default private meaning anything outside of the class scope cannot access it
class Entity
{

    // Protected means that this class and all subclasses can access this data
protected:
    int X, Y;
    void Print() {} // example method to further show visibility

public:
    Entity()
    {
        X = 0;
        Print();
    }
};

class Player : public Entity
{
public:
    Player()
    {
        X = 2;   // You can now use the data from Entity that is protected
        Print(); // and here as well
    }
};

int main()
{
    Entity e;
    e.Print(); // Cannot use Print here as 'e' is outside of the class scope and is not part of a subclass
    e.X = 2;   // Although e is an Entity, X is private and cannot be called outside of the class scope and is not part of a subclass

    std::cin.get();
}
