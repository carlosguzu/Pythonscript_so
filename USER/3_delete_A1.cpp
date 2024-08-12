#include <iostream>
#include <fstream>
#include <cstdio>
//esta funcion elimina el archivo a1 sin importar donde este el ejecutable y en caso tal no pueda borrarlo que arroje un mensaje de error
void borrarA1() {
    const char* ruta_A1 = "C:\\A1.txt";  // Ruta del archivo A1 (no se puede manipular)

    if (std::remove(ruta_A1) == 0) {
        std::cout << "El archivo A1 fue borrado correctamente." << std::endl;
    } else {
        std::cerr << "Error al borrar el archivo A1. Verifica de que el archivo exista ." << std::endl;
    }
}


int main() {
        borrarA1(); //llamado a la funcion.
    return 0;
}