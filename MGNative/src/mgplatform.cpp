#include "mgplatform.h"

#include "SDL2/SDL.h"

static SDL_Window* window;

MGGameRunBehavior MG_Initialize()
{
    SDL_Init(SDL_INIT_VIDEO |
             SDL_INIT_JOYSTICK |
             SDL_INIT_GAMECONTROLLER |
             SDL_INIT_HAPTIC);

    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 1);

    window = SDL_CreateWindow("MonoGame Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 640, SDL_WINDOW_SHOWN | SDL_WINDOW_OPENGL);

    return MGGameRunBehavior::Synchronous;
}

mgbool MG_Update(mgbool* isActive)
{
    SDL_Event event;
    while (SDL_PollEvent(&event) == 1)
    {
        switch(event.type)
        {
            case SDL_QUIT:
                return false;
        }
    }

    return true;
}

MGDisplayOrientation MG_GetDisplayOrientation()
{
    return MGDisplayOrientation::Default;
}

void* MG_GetWindowHandle()
{
    return window;
}

mgbool MG_GetWindowResizable()
{
    return (SDL_GetWindowFlags(window) & SDL_WINDOW_RESIZABLE) == SDL_WINDOW_RESIZABLE; 
}

void MG_SetWindowResizable(mgbool value)
{
    SDL_SetWindowResizable(window, (SDL_bool)value);
}

MGRectangle MG_GetWindowClientBounds()
{
    MGRectangle rect;
    SDL_GetWindowPosition(window, &rect.x, &rect.y);
    SDL_GetWindowSize(window, &rect.w, &rect.h);

    return rect;
}

MGPoint MG_GetWindowPosition()
{
    MGPoint point;
    SDL_GetWindowPosition(window, &point.x, &point.y);

    return point;
}

void MG_SetWindowPosition(MGPoint position)
{
    SDL_SetWindowPosition(window, position.x, position.y);
}

mgstring MG_GetWindowTitle()
{
    return MG_GetMGString(SDL_GetWindowTitle(window));
}

void MG_SetWindowTitle(mgstring title)
{
    SDL_SetWindowTitle(window, MG_GetString(title).c_str());
}
