#include <iostream>
#include "management.h"
using namespace std;

void menu();
void inner_menu();
void menu2();

int main() {
    Shelter myShelter;
    string animal_name;
    string animal_type;
    int choice;

    menu();
    cout << "Choice: ";
    cin >> choice;

    while (choice != 6){
        if (choice == 1){
            animal_type = "dog";
            cout << "What is the name of the dog? ";
            cin >> animal_name;
            myShelter.add_animal(animal_type, animal_name);
        } else if (choice == 2){
            animal_type = "cat";
            cout << "What is the name of the cat? ";
            cin >> animal_name;
            myShelter.add_animal(animal_type, animal_name);
        } else if (choice == 3){
            animal_type = "dog";
            cout << myShelter.get_animal(animal_type) << endl;
        } else if (choice == 4){
            animal_type = "cat";
            cout << myShelter.get_animal(animal_type) << endl;
        } else if (choice == 5){
            animal_type = "any";
            cout << myShelter.get_animal(animal_type) << endl;
        } else if (choice == 6){

        }else{
            cout << "Please enter a number between 1 and 6" << endl;
        }
        menu();
        cin >> choice;
    }
    cout << "Thank you for visiting the shelter, have a nice day!" << endl;
    return 0;
}

void menu(){
    cout << "-----------------------WELCOME TO THE SHELTER-----------------------" << endl;
    cout << "What would you like to do today?" << endl;
    cout << "1. Add a Dog \t 2. Add a Cat" << endl;
    cout << "3. Get a Dog \t 4. Get a Cat \t 5. Get any Animal" << endl;
    cout << "6. Exit Shelter" << endl;
}







