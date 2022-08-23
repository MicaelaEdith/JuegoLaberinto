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
        x--;
        cout<<"w"<<endl;
        break;
      case 's':
          x++;
          cout<<"s"<<endl;
        break;
      case 'a':
          y--;
          cout<<"a"<<endl;
        break;
      case 'd':
          y++;
          cout<<"d"<<endl;
        break;
      default: //gameOver=true;
        break;
    }
//cout << "cordenadas x:" << x <<", y:" <<y<<endl;
}
