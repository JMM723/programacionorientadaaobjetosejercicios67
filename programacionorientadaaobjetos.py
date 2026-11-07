
from abc import ABC, abstractmethod

# Creamos una clase abstracta para representar un vehiculo
class Vehiculo(ABC):

    # Esta funcion obliga a los vehiculos a tener su propio arranque
    @abstractmethod
    def arrancar(self):
        pass

# Creamos una clase para representar un automovil
class Automovil(Vehiculo):

    def arrancar(self):
        print("El automovil arranco con su motor.")

# Creamos una clase para representar una motocicleta
class Motocicleta(Vehiculo):

    def arrancar(self):
        print("La motocicleta arranco.")

auto1 = Automovil()
moto1 = Motocicleta()

# Cada vehiculo realiza su propio metodo de arranque
auto1.arrancar()
moto1.arrancar()
