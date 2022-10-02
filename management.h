#include <string>
#include <queue>
using namespace std;

class Animal{
public:
    string name;
    string type;
    int arrival_order;
};

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

