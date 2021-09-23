#include <stdio.h>
#include "Cube.h"


int main(int argc, char* argv[])
{
    Cube* myCube;
    myCube = cube_create(2.0);

    print_cube(myCube);
    cube_set_edge(myCube, 3.0);
    print_cube(myCube);

    cube_free(myCube);

    return (0);
}
