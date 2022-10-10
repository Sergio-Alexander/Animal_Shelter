#include <string>
#include <queue>
using namespace std;

// Animal Class declaration of the animal name, type, and arrival order.
class Animal{
public:
    string name;
    string type;
    int arrival_order;
};
// Shelter Class declaration the queue of animal (Anjing = Dog, and Kucing = Cat).
// Shelter Class also declaring the "Add Animal" and "Adopt Animal" functions.
class Shelter{
private:
    queue<Animal> anjing;
    queue<Animal> kucing;

public:
    int counter;
    void add_animal(string animal_type, string animal_name);
    string get_animal(string animal_type);
    Shelter();
};

