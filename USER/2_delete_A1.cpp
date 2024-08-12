#include <filesystem>
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
    // Crear un array de caracteres para la extensión
    char extension[10]; // Asegúrate de que sea lo suficientemente grande para la extensión
    obtenerExtension(extension);

    // Definir la ruta base del archivo sin la extensión
    char ruta_base[] = "A1";

    // Crear un array de caracteres para la ruta completa
    char file_path[50]; // Asegúrate de que sea lo suficientemente grande para la ruta completa

    // Construir la ruta completa concatenando la ruta base y la extensión
    strcpy(file_path, ruta_base);
    strcat(file_path, extension);

    // Intentar abrir el archivo en modo lectura (ios::in)
    fstream file(file_path, ios::in);

    // Verificar si el archivo se abrió correctamente
    if (!file.is_open()) {
        cerr << "Error: no se pudo abrir el archivo. Verifica si el archivo existe y la ruta es correcta." << endl;
        return EXIT_FAILURE;
    }

    cout << "\nArchivo " << file_path << " encontrado exitosamente." << endl;

    // Cerrar el archivo
    file.close();

    // Preguntar al usuario si desea eliminar el archivo
    filesystem::path archivo = file_path;
    char respuesta;

    cout << "¿Estas seguro de que deseas eliminar el archivo " << archivo << "? (s/n)" << endl;
    cin >> respuesta;
    while (respuesta != 's' && respuesta != 'S' && respuesta != 'n' && respuesta != 'N') {
        cout << "Respuesta invalida. Por favor, responda con 's' o 'n'." << endl;
        cin >> respuesta;
    }

    if (respuesta == 's' || respuesta == 'S') {
        try {
            if (filesystem::remove(archivo))
                cout << "Archivo " << archivo << " eliminado.\n";
            else
                cout << "Archivo " << archivo << " no encontrado.\n";
        } catch (const filesystem::filesystem_error &err) {
            cerr << "filesystem error: " << err.what() << '\n';
        }
    }

    printf("Presione una tecla para continuar...");
    cin.ignore(); // Ignora el carácter de nueva línea restante
    getchar();    // Espera a que el usuario presione una tecla

    return 0;
}