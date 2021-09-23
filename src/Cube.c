#include <stdlib.h>
#include <stdio.h>
#include "Cube.h"


/**
 * @brief A cube representation
 * 
 */
struct cube {
    /** @brief The length of the cube edge */
    float edge;
};

Cube* cube_create(float edge)
{
    Cube* c = (Cube*) malloc(sizeof(Cube));

    if (c != NULL) {
        c->edge = edge;        
    }

    return c;
}

void cube_free(Cube* cube)
{
    free(cube);
}

float cube_get_edge(Cube* cube)
{
    return cube->edge;
}

void cube_set_edge(Cube* cube, float edge)
{
    cube->edge = edge;
}

float cube_area(Cube* cube)
{
    return cube->edge * cube->edge * 6;
}

float cube_volume(Cube* cube)
{
    return cube->edge * cube->edge * cube->edge;
}

void print_cube(Cube* cube)
{
    printf("Edge: %f\n", cube_get_edge(cube));
    printf("Area: %f\n", cube_area(cube));
    printf("Volume: %f\n", cube_volume(cube));
}
