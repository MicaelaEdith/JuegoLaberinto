#include "mapaJuego.h"
#include <iostream>
#include <fstream>

using namespace std;

mapaJuego::mapaJuego()
{
    jugadorCelda=NULL;
    cargarMapaDesdeArchivo();
}

void mapaJuego::dibujar()
{
    for(int i =0;i<30;i++)
    {
        for(int j =0;j<75;j++)
           {
            cout<<celdas [i][j].id;
           }
    cout << endl;
    }
}


void mapaJuego::setJugadorCel(int jugadorX, int jugadorY)
{
    if(jugadorCelda!=NULL)
    {
        jugadorCelda->id=0;
    }

    jugadorCelda=&celdas[jugadorX][jugadorY];
    jugadorCelda->id=3;
    //    cout << "las coordenadas del jugaror están en: "<<jugadorX <<" "<<jugadorY<<endl;

}


void mapaJuego::cargarMapaDesdeArchivo()
{
    /*ofstream crearMapa("Map.txt");
    if(crearMapa.is_open()){

    }
    else cout<< "ERROR -- El Mapa NO pudo ser creado."<<endl;*/

    string linea;
    ifstream archivo("Map.txt");

    if(archivo.is_open()){

    }
    else cout<<"ERROR - No se puede cargar el mapa."<<endl;

}

