#include "celdaMapa.h"

celdaMapa::celdaMapa()
{
    id=1;
}

bool celdaMapa::bloqueado()
{
    if(id=='|')
        return true;
    else
        return false;
}
