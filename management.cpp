#include <iostream>
#include <queue>
#include <string>
#include "management.h"
using namespace std;

void Shelter::add_animal(string animal_type, string animal_name) {
    Animal to_add;

    if (animal_type == "dog"){
        to_add.type = "dog";
    } else{
        to_add.type = "cat";
    }
    to_add.name = animal_name;
    to_add.arrival_order = counter;
    counter++;

    if (animal_type == "dog"){
        anjing.push(to_add);
    } else{
        kucing.push(to_add);
    }
}

string Shelter::get_animal(string animal_type) {
    if (animal_type == "dog"){
        if (anjing.size() == 0){
            return "NO DOG IN SHELTER";
        }
        Animal d = anjing.front();
        anjing.pop();
        return d.name;
    } else if (animal_type == "cat"){
        if (kucing.size() == 0){
            return "NO CAT IN SHELTER";
        }
        Animal c = kucing.front();
        kucing.pop();
        return c.name;
    } else{
        if (anjing.size() && kucing.size()){
            Animal d = anjing.front();
            Animal c = kucing.front();

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
            return "NO ANIMAL IN SHELTER";
        }
    }
}

Shelter::Shelter() {
    counter = 0;
}



