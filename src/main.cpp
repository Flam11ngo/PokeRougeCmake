#define SDL_MAIN_HANDLED
#include"common.h"


int main(){
    SDL_Init(SDL_INIT_EVERYTHING);
    IMG_Init(IMG_INIT_PNG | IMG_INIT_JPG);
    Mix_Init(MIX_INIT_MP3);
    TTF_Init();
    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);

    SDL_Window* window = SDL_CreateWindow("Pokemon Game",
                                          SDL_WINDOWPOS_CENTERED,
                                          SDL_WINDOWPOS_CENTERED,
                                          800, 600,
                                          SDL_WINDOW_SHOWN);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    
    SDL_Event event;
    bool is_running = true;
    
    std::cout << "Tag1" << std::endl;
    SDL_Surface* suf_icon = IMG_Load("../image/icon.png");

    SDL_Texture* tex_icon = SDL_CreateTextureFromSurface(renderer, suf_icon);
    SDL_Point mouse_pos = {0, 0};

    SDL_Rect icon_rect;
    icon_rect.w = suf_icon->w;
    icon_rect.h = suf_icon->h;

    while(is_running){
       
        while(SDL_PollEvent(&event)){
            if(event.type==SDL_QUIT){
                is_running = false;
            }
            if(event.type == SDL_MOUSEMOTION){
                mouse_pos.x = event.motion.x;
                mouse_pos.y = event.motion.y;
                std::cout << "Mouse moved to: (" << mouse_pos.x << ", " << mouse_pos.y << ")\n";
            }

        }
        //deal with datas
        icon_rect.x = mouse_pos.x;
        icon_rect.y = mouse_pos.y;

        // Render the icon at the mouse position
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, tex_icon, nullptr, &icon_rect);
        SDL_RenderPresent(renderer);

    }
    return 0;
}