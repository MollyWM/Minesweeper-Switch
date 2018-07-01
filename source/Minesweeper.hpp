#pragma once

#include <switch.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

#include "Engine/Defaults.hpp"
#include "Engine/Input.hpp"
#include "Scenes/BoardScene.hpp"

class Minesweeper
{
    public:
        Minesweeper();
        void Start();

    private:
        bool InitSDL();
        void InitGame();
        void DeinitSDL();
        
        SDL_Window *_window;
        SDL_Renderer *_renderer;

        Input* _input;
        BoardScene* _board;
        Resources* _resources;
};