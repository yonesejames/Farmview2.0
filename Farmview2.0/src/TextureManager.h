#ifndef TEXTUREMANAGER_H
#define TEXTUREMANAGER_H


#include "Game.h"

class TextureManager
/* TextureManager creates texture from filePath and/or draw the texture on screen */
{
public:
    static SDL_Texture* loadTexture(const char* filePath);
    static void draw(SDL_Texture* texture, SDL_Rect source, SDL_Rect destination, SDL_RendererFlip flip);
};


#endif

