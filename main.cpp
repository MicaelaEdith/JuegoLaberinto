#include <iostream>
#include "Jugador.h"
#include "celdaMapa.h"
#include "mapaJuego.h"

using namespace std;

int main()
{

 bool gameOver=false;
 mapaJuego Mapa;
 Jugador Heroe;

 cout << "Inicio del juego" <<endl;

 while(!gameOver)
 {
    Heroe.traerDato();

    Mapa.setJugadorCel(Heroe.x,Heroe.y);

    Mapa.dibujar();

 }
cout <<"game over" << endl;
 return 0;
}
