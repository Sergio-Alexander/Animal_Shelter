#include <iostream>
#include "management.h"
using namespace std;

void menu();
void inner_menu();
void menu2();

int main() {
    Shelter myShelter;
    int choice;
    int cat_or_dog;
    int add_animal_num;
    string animal_name;
    string animal_type;
    menu();
    cout << "Enter choice: ";
    cin >> choice;


    if (choice == 1){
        cout << "How many animals do you want to add? ";
        cin >> add_animal_num;

        for (int i = 0; i < add_animal_num; i++){
            inner_menu();
            cin >> cat_or_dog;
            if (cat_or_dog == 1){
                animal_type = "dog";
                cout << "What would you want to name your dog?" << endl;
                cout << "Name: ";
                cin >> animal_name;
            } else{
                animal_type = "cat";
                cout << "What would you want to name your cat?" << endl;
                cout << "Name: ";
                cin >> animal_name;
            }
            myShelter.add_animal(animal_type, animal_name);
        }
        menu2();
        cin >> choice;
        if (choice == 1){
            int what_animal;
            cout << "What animal would you like to get? " << endl;
            cout << "1. Dog \t 2. Cat \t 3. Any" << endl;
            cout << "Choice: ";
            cin >> what_animal;
            cout << endl;
            if (what_animal == 1){
                cout << myShelter.get_animal("dog");
            } else if (what_animal == 2){
                cout << myShelter.get_animal("cat");
            } else{
                cout << myShelter.get_animal("any");
            }
        }


    } else if (choice == 2){
        cout << "No animal in shelter!" << endl;
        cout << "Please re-run the program and add an animal!";
    } else{
        cout << "Thank you for coming to the shelter, please come again!" << endl;
    }

    return 0;
}

void menu(){
    cout << "-----------------------WELCOME TO THE SHELTER-----------------------" << endl;
    cout << "What would you like to do today?" << endl;
    cout << "1. Add an Animal" << endl;
    cout << "2. Get an Animal" << endl;
    cout << "3. Exit Shelter" << endl;
}

void inner_menu(){
    cout << "Would you like to add a CAT or a DOG?" << endl;
    cout << "1. Dog \t 2.Cat" << endl;
    cout << "Enter choice: ";
}

void menu2(){
    cout << "-----------------------WELCOME TO THE SHELTER-----------------------" << endl;
    cout << "What would you like to do today?" << endl;
    cout << "1. Get an Animal" << endl;
    cout << "2. Exit Shelter" << endl;
}




