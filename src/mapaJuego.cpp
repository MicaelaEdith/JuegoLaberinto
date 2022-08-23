#include "mapaJuego.h"
#include "Jugador.h"
#include <iostream>
#include <fstream>

using namespace std;

mapaJuego::mapaJuego()
{
    jugadorCelda=NULL;
    cargarMapaDesdeArchivo();    //CHEQUEAR
    gameOver=false;
    tesoro=false;
}

void mapaJuego::dibujar()
{
    for(int i =0;i<10;i++)
    {
        for(int j =0;j<15;j++)
           {
            cout  <<celdas [i][j].id;
           }
    cout << endl;
    }
}


bool mapaJuego::setJugadorCel(int jugadorX, int jugadorY)
{
    if(celdas[jugadorX][jugadorY].bloqueado()==false)
        {
            if(celdas[jugadorX][jugadorY].id=='$')
            {
                dibujarTesoro();
                gameOver=true;
                return true;
            }
            else{

                if(jugadorCelda!=NULL)
                {
                    jugadorCelda->id=0;
                }

                jugadorCelda=&celdas[jugadorX][jugadorY];
                jugadorCelda->id='O';
                return true;
            }
        }
     else
        return false;
}


void mapaJuego::cargarMapaDesdeArchivo()
{

    string linea;
    int fila=0;
    ifstream archivo("Map.txt");

    if(archivo.is_open())
        {
            while(getline(archivo,linea))
            {
                for(int i=0;i<linea.length();i++)
                {
                    if(linea[i]=='0')
                    celdas[fila][i].id=0;
                    else
                    celdas[fila][i].id=linea[i];
                }
                fila++;
            }

        }
    else cout<<"ERROR - No se puede cargar el mapa."<<endl;

}

void mapaJuego::dibujarBienvenida()
{
    string linea;
    ifstream archivo("Intro.txt");

    if(archivo.is_open())
        {
            while(getline(archivo,linea))
            {
                cout<<linea<<endl;
            }
        }
}

void mapaJuego::dibujarTesoro()
{
    string linea;
    ifstream archivo("Tesoro.txt");

    if(archivo.is_open())
        {
            while(getline(archivo,linea))
            {
                cout<<linea<<endl;
            }
        }
    tesoro=true;

}

