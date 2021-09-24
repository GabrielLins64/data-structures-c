#include "tests.h"
#include "Cube.h"


void test_cube()
{
    Cube* myCube;
    myCube = cube_create(2.0);

    print_cube(myCube);
    cube_set_edge(myCube, 3.0);
    print_cube(myCube);

    cube_free(myCube);
}
