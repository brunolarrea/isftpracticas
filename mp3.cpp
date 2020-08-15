#include <iostream>
#include <string>
using namespace std;

struct
{
    string artista;
    string titulo;
    int kb;
    float duracion;
} cancion;
 
int main()
{
    cout << "Artista: " << endl;
    getline(cin,cancion.artista);
    cout << "Titulo: " << endl;
    getline(cin,cancion.titulo);
    cout << "KB: " << endl;
    cin >> cancion.kb;
    cout << "Duracion: " << endl;
    cin >> cancion.duracion;
    
    cout << "------------------" << endl;
    
    cout << "Artista: " << cancion.artista << endl;
    cout << "Titulo: " << cancion.titulo << endl;
    cout << cancion.kb << " KB" << endl;
    cout << cancion.duracion <<" min" << endl;
    
    return 0;
}
