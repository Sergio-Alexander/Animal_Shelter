#include <iostream>
#include "management.h"
using namespace std;

// Declaring the function menu which will display the menu to the user
void menu();

int main() {
    Shelter myShelter;
    string animal_name;
    string animal_type;
    int choice;

    // This section will allow the users to choose which choice they would want
    menu();
    cout << "Choice: ";
    cin >> choice;

    while (choice != 6){
        if (choice == 1){
            // Choice 1 will allow the user to add a dog to the shelter
            animal_type = "dog";
            cout << "What is the name of the dog? ";
            cin >> animal_name;
            myShelter.add_animal(animal_type, animal_name);
        } else if (choice == 2){
            // Choice 2 will allow the user to add a cat to the shelter
            animal_type = "cat";
            cout << "What is the name of the cat? ";
            cin >> animal_name;
            myShelter.add_animal(animal_type, animal_name);
        } else if (choice == 3){
            // Choice 3 will allow the user to adopt a dog
            animal_type = "dog";
            cout << myShelter.get_animal(animal_type) << endl;
        } else if (choice == 4){
            // Choice 4 will allow the user to adopt a cat
            animal_type = "cat";
            cout << myShelter.get_animal(animal_type) << endl;
        } else if (choice == 5){
            // Choice 5 will allow the user to adopt any animal
            animal_type = "any";
            cout << myShelter.get_animal(animal_type) << endl;
        } else if (choice == 6){
            // Choice 6 will exit the loop.
        }else{
            // If user does not choose a number between 1 and 6, it will cout the message below.
            cout << "Please enter a number between 1 and 6" << endl;
        }
        menu();
        cin >> choice;
    }

    // Exiting the menu will cout the message below
    cout << "Thank you for visiting the shelter, have a nice day!" << endl;
    return 0;
}

// Function definition of the menu
void menu(){
    cout << "-----------------------WELCOME TO THE SHELTER-----------------------" << endl;
    cout << "What would you like to do today?" << endl;
    cout << "1. Add a Dog \t 2. Add a Cat" << endl;
    cout << "3. Get a Dog \t 4. Get a Cat \t 5. Get any Animal" << endl;
    cout << "6. Exit Shelter" << endl;
}







