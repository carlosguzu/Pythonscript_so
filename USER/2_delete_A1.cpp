#include <filesystem>
#include <iostream>
using namespace std;


int main() {
  filesystem::path archivo = "A1.txt";
try {
    if (filesystem::remove(archivo))
       cout << "Archivo " << archivo << " eliminado.\n";
    else
       cout << "Archivo " << archivo << " no encontrado.\n";
  }
  catch(const filesystem::filesystem_error& err) {
     cout << "filesystem error: " << err.what() << '\n';
  }

  return 0;
}