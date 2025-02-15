#include <iostream>
#include <type_traits>
#include "Hominidae.h"
#include "Ponginae.h"
#include "Pongo.h"
#include "Homininae.h"
#include "Gorillini.h"
#include "Gorilla.h"
#include "Hominini.h"
#include "Pan.h"
#include "Homo.h"
using namespace std;
int main() {
    if constexpr (is_base_of<Ponginae, Homo>()) {
        cout<<"Human is a Ponginae\n";
    } else {
        cout<<"Human is not a Ponginae\n";
    }



    if constexpr (is_base_of<Homininae, Homo>()) {
        cout<<" Human is a Homininae\n";
    } else {
        cout<<" Human is not a Homininae\n";
    }



    if constexpr (is_base_of<Hominidae, Gorilla>()) {
        cout<<" Gorilla is a Hominidae\n";
    } else {
        cout<<" Gorilla is not a Hominidae\n";
    }




    if constexpr (is_base_of<Hominini, Gorilla>()) {
        cout<<" Gorilla is a Homininae\n";
    } else {
        cout<<" Gorilla is not a Homininae\n";
    }




    if constexpr (is_base_of<Hominidae, Pongo>()) {
        cout<<" Pongo is a Hominidae\n";
    } else {
        cout<<" Pongo is not a Hominidae\n";
    }




    if constexpr (is_base_of<Gorillini, Pongo>()) {
        cout<<" Pongo is a Gorillini\n";
    } else {
        cout<<" Pongo is not a Gorillini\n";
    }

    if constexpr (is_base_of<Homo, Hominidae>()) {
        cout<<" Hominidae is a Human\n";
    } else {
        cout<<" Hominidae is not a Human\n";
    }


    if constexpr (is_base_of<Gorilla, Hominidae>()) {
        cout<<" Hominidae is a Gorilla\n";
    } else {
        cout<<" Hominidae is not a Gorilla\n";
    }


return 0;
}
