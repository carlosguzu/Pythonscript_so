#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

// Función para obtener la extensión del archivo
void obtenerExtension(char extension[]) {
    cout << "Ingresa la extensión del archivo (por ejemplo, .txt, .cpp): ";
    cin >> extension;
}

int main() {
    // Definir la ruta base del archivo sin la extensión
    char ruta_base[] = "..\\D3\\D31\\A5";

    // Crear un array de caracteres para la extensión
    char extension[10]; // Asegúrate de que sea lo suficientemente grande para la extensión
    obtenerExtension(extension);

    // Crear un array de caracteres para la ruta completa
    char file_path[50]; // Asegúrate de que sea lo suficientemente grande para la ruta completa

    // Construir la ruta completa concatenando la ruta base y la extensión
    strcpy(file_path, ruta_base);
    strcat(file_path, extension);

    // Ejecución del archivo
    cout << "Opening File" << endl;
    system(file_path);

    // Intentar abrir el archivo en modo lectura (ios::in)
    fstream file(file_path, ios::in);

    // Verificar si el archivo se abrió correctamente
    if (!file.is_open()) {
        cerr << "Error: no se pudo abrir el archivo. Verifica si el archivo existe y la ruta es correcta." << endl;
        return EXIT_FAILURE;
    }

    cout << "\nArchivo " << file_path << " abierto exitosamente." << endl;

    // Cerrar el archivo
    file.close();

    return EXIT_SUCCESS;
}