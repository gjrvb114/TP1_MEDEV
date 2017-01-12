#include "includes.h"
#include "Cube.h"

int main(){

    srand(time(NULL));
    int cube_size = 13;
    Cube world(cube_size);
    while ( !world.fin )
	{
        world.mainLoop();
    }

    return 0;
    }

