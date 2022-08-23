#include "Jugador.h"
#include <iostream>

using namespace std;


Jugador::Jugador()
{
    x=1;
    y=1;
}

void Jugador::traerDato()
{
    char entradaUsuario=' ';
    cin>>entradaUsuario;

    switch(entradaUsuario)
    { case 'w':
            xAnterior=x;
            x--;
        break;
      case 's':
            xAnterior=x;
            x++;
        break;
      case 'a':
            yAnterior=y;
            y--;
        break;
      case 'd':
            yAnterior=y;
            y++;
        break;
      default: //gameOver=true;
        break;
    }
}

void Jugador::volverAtras()
{
    x=xAnterior;
    y=yAnterior;
}
