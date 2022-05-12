#ifndef LIFE_H
#define LIFE_H
#include "utils.h"
#include "enemy.h"
#include "plane.h"
#include "image.h"

struct life
{
SDL_Rect position;
SDL_Surface* fond1;
SDL_Surface* fond2;
SDL_Surface* fond3;
SDL_Surface* fond4;
int nb;
Image image;
};
typedef struct life life;

void initialiselLife(life *L);
void afficherlife(life *L,SDL_Surface *window);
void libererlife(life* L);
void life_setX(life *life, int x);
void life_setY(life *life, int y);
void life_setCoordinates(life *life, int x, int y);
bool life_load(SDL_Renderer *renderer, life *life, const char *image);
void life_destroy(life *life);
void life_render(SDL_Renderer *renderer, life *life);
#endif // LIFE_H
