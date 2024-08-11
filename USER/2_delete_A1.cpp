#include <filesystem>
#include <iostream>
using namespace std;

int main()
{
   filesystem::path archivo = "A1.txt";
   char respuesta;
   cout << "¿Estas seguro de que deseas eliminar el archivo " << archivo << "? (s/n)" << endl;
   cin >> respuesta;
   while (respuesta != 's' && respuesta != 'S' && respuesta != 'n' && respuesta != 'N')
   {
      cout << "Respuesta invalida. Por favor, responda con 's' o 'n'." << endl;
      cin >> respuesta;
   }
   
      if (respuesta == 's' || respuesta == 'S')
      {
         try
         {
            if (filesystem::remove(archivo))
               cout << "Archivo " << archivo << " eliminado.\n";
            else
               cout << "Archivo " << archivo << " no encontrado.\n";
         }
         catch (const filesystem::filesystem_error &err)
         {
            cerr << "filesystem error: " << err.what() << '\n';
         }

      }
         printf("Presione una tecla para continuar...");
         cin.ignore();  // Ignora el carácter de nueva línea restante
         getchar(); // Espera a que el usuario presione una tecla
         return 0;
   }
