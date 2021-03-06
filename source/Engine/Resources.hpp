#pragma once

#include <switch.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

#include "Defaults.hpp"
#include <map>
#include <vector>
#include <utility>
#include <string>

class Resources
{
    public:
        Resources() {};
        void LoadROMFS(SDL_Renderer*);
        SDL_Texture* LoadTexture(SDL_Renderer*, std::string);
        SDL_Texture* GetTexture(CellState, int);
        SDL_Texture* GetTexture(std::string);
        TTF_Font* GetFont();
        ~Resources();

      private:
        TTF_Font* _font;
        std::map<CellState, std::vector<SDL_Texture*>> _cellTextures;
        std::map<std::string, SDL_Texture*> _textures;
};