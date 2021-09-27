#ifndef _H_CUBE
#define _H_CUBE

typedef struct cube Cube;

/**
 * @brief Create a cube object
 * 
 * @param edge 
 * @return Cube* 
 */
Cube* cube_create(float edge);

/**
 * @brief Frees memory allocated by a cube object
 * 
 * @param cube 
 */
void cube_free(Cube* cube);

/**
 * @brief Returns the cube's edge
 * 
 * @param cube 
 * @return float 
 */
float cube_get_edge(Cube* cube);

/**
 * @brief Set the cube edge
 * 
 * @param cube 
 * @param edge 
 */
void cube_set_edge(Cube* cube, float edge);

/**
 * @brief Calculates the cube area
 * 
 * @param cube 
 * @return float 
 */
float cube_area(Cube* cube);

/**
 * @brief Calculates the cube volume
 * 
 * @param cube 
 * @return float 
 */
float cube_volume(Cube* cube);

/**
 * @brief Prints all info about the cube
 * 
 * @param cube 
 */
void print_cube(Cube* cube);

#endif
