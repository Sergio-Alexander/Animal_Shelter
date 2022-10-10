#include <iostream>
#include <queue>
#include <string>
#include "management.h"
using namespace std;

// Function definition of Add_animal which allows the users to add an animal to the shelter.
void Shelter::add_animal(string animal_type, string animal_name) {
    Animal to_add;

    // If Aniaml is dog, it will add the dog. Else the cat.
    if (animal_type == "dog"){
        to_add.type = "dog";
    } else{
        to_add.type = "cat";
    }

    // Keeping count of the arrival order of the animal.
    to_add.name = animal_name;
    to_add.arrival_order = counter;
    counter++;

    // Pushing the animal to the qyeue
    if (animal_type == "dog"){
        anjing.push(to_add);
    } else{
        kucing.push(to_add);
    }
}
// Function definition of get_animal which allows the users to adopt an animal
string Shelter::get_animal(string animal_type) {

    // Checking whether or not there is an animal in the shelter
    // If there is an animal that the user desires, it will pop it out of the queue
    // Popping it out of the queue will allow the user to adopt the animal
    if (animal_type == "dog"){
        if (anjing.size() == 0){
            return "NO DOG IN SHELTER";
        }
        // If there is a dog, pop it out of the queue
        Animal d = anjing.front();
        anjing.pop();
        return d.name;
    } else if (animal_type == "cat"){
        if (kucing.size() == 0){
            return "NO CAT IN SHELTER";
        }
        // If there is a cat, pop it out of the queue
        Animal c = kucing.front();
        kucing.pop();
        return c.name;
    } else{
        if (anjing.size() && kucing.size()){
            Animal d = anjing.front();
            Animal c = kucing.front();
            // If the user asks for any animal, the system will pop out the animal that has the lower arrival order.
            if (d.arrival_order < c.arrival_order){
                anjing.pop();
                return d.name;
            } else{
                kucing.pop();
                return c.name;
            }
        } else if (anjing.size() == 0 && kucing.size() != 0){
            Animal c = kucing.front();
            kucing.pop();
            return c.name;
        } else if (kucing.size() == 0 && anjing.size() != 0){
            Animal d = anjing.front();
            anjing.pop();
            return d.name;
        } else{
            // If there is no animal in the shelter, it will return the message below.
            return "NO ANIMAL IN SHELTER";
        }
    }
}

// Function definition of the counter of the animal arrival time
// It will start at zero and count upwards
// The lower the counter, the older the animal is
Shelter::Shelter() {
    counter = 0;
}



