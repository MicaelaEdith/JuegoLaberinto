#include <iostream>
#include "Jugador.h"
#include "celdaMapa.h"
#include "mapaJuego.h"

using namespace std;

int main()
{


 mapaJuego Mapa;
 Jugador Heroe;
 Mapa.dibujarBienvenida();
 Mapa.dibujar();
    cout<<"Presiona D y ENTER para iniciar el juego. Mueve con 'a','s','d','w' y ENTER.";


 while(!Mapa.gameOver)
 {
    Heroe.traerDato();

    if(Mapa.setJugadorCel(Heroe.x,Heroe.y)&&!Mapa.tesoro)
        Mapa.dibujar();
    else if (!Mapa.tesoro)
                {
                Heroe.volverAtras();
                    Mapa.dibujar();
                }
 }
    return 0;
}
