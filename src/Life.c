#include "life.h"
#include "utils.h"
#include "animation.h"
#include "collision.h"
void initialiserlife(life *L)
{
L->nb=3;
L->position.x =200;
L->position.y = 200 ;

L->fond1 = IMG_Load("L1.png");
L->fond2 = IMG_Load("L2.png");
L->fond3 = IMG_Load("L3.png");
L->fond4 = IMG_Load("L4.png");
}

void afficherlife(life *L,SDL_Surface *window)
{

if(L->nb==3)
{
SDL_BlitSurface(L->fond4,NULL, window,&L->position);

}
if(L->nb==2)
{
SDL_BlitSurface(L->fond3,NULL, window,&L->position);

}
if(L->nb==1)
{
SDL_BlitSurface(L->fond2,NULL, window,&L->position);
}
if(L->nb==0)
{
SDL_BlitSurface(L->fond1,NULL, window,&L->position);


}
}
void libererlife(life* L)
{
SDL_FreeSurface(L->fond1);
SDL_FreeSurface(L->fond2);
SDL_FreeSurface(L->fond3);
SDL_FreeSurface(L->fond4);


}

bool life_load(SDL_Renderer *renderer, life *life, const char *image)
{
    // Load enemy image
    if(!Image_load(renderer, &life->image, image))
    {
        return false;
    }


    return true;
}

void life_destroy(life *life)
{
    Image_destroy(&life->image);

}

void life_setX(life *life, int x)
{
    // Enemy x coordinate
    life->image.rect.x = x+800;


}

void life_setY(life *life, int y)
{
    // Enemy y coordinate
    life->image.rect.y = y+100;

 }

void life_setCoordinates(life *life, int x, int y)
{
    life_setX(life, x);
    life_setY(life, y);
}

void life_render(SDL_Renderer *renderer, life *life)
{

    // Render enemy
    Image_render(renderer, &life->image);
}
bool test = false  ;

void Collision(Plane  box1,Enemy box2 , bool test , int nb )
{
   if((box2.image.rect.x >= box1.image.rect.x + box1.image.rect.w)      // trop à droite
    || (box2.image.rect.x + box2.image.rect.w <= box1.image.rect.x)     // trop à gauche
    || (box2.image.rect.y >= box1.image.rect.y + box1.image.rect.h)     // trop en bas
    || (box2.image.rect.y + box2.image.rect.h <= box1.image.rect.y))   // trop en haut
test =false ;
   else
       test = true ;

   if( test == true )
   {
       void libererlife(life* L);
       nb=nb-1 ;

       void afficherlife(life *L,SDL_Surface *window);

   }


}
