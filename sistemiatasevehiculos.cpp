//
// Created by joeli on 7/11/2026.
//

#include <iostream>
using namespace std;

// Creamos una clase abstracta para representar un vehiculo
class Vehiculo {
public:

    // Esta funcion obliga a los vehiculos a tener su propio arranque
    virtual void arrancar() = 0;
};

// Creamos una clase para representar un automovil
class Automovil : public Vehiculo {
public:

    void arrancar() override {
        cout << "El automovil arranco con su motor." << endl;
    }
};

// Creamos una clase para representar una motocicleta
class Motocicleta : public Vehiculo {
public:

    void arrancar() override {
        cout << "La motocicleta arranco." << endl;
    }
};

int main() {

    Automovil auto1;
    Motocicleta moto1;

    // Cada vehiculo realiza su propio metodo de arranque
    auto1.arrancar();
    moto1.arrancar();

    return 0;
}
