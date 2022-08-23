#ifndef MAPAJUEGO_H
#define MAPAJUEGO_H
#include <celdaMapa.h>


class mapaJuego
{
    public:
        mapaJuego();

        celdaMapa* jugadorCelda;
        celdaMapa celdas[75][30];

    void dibujar();

    void setJugadorCel(int jugadorX, int jugadorY);




    protected:

    void cargarMapaDesdeArchivo();

    private:
};

#endif // MAPAJUEGO_H
