#ifndef MAPAJUEGO_H
#define MAPAJUEGO_H
#include <celdaMapa.h>


class mapaJuego
{
    public:
        mapaJuego();

        celdaMapa* jugadorCelda;
        celdaMapa celdas[15][60];

    void dibujarBienvenida();

    void dibujarTesoro();

    void dibujar();

    bool setJugadorCel(int jugadorX, int jugadorY);

    bool gameOver=false;

    bool tesoro=false;

    protected:

    void cargarMapaDesdeArchivo();

    private:
};

#endif // MAPAJUEGO_H
