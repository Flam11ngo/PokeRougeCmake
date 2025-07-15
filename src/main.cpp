#define SDL_MAIN_HANDLED
#include"common.h"
#include"Global.h"
const double delta = 1000.0 / 60.0; // 60 FPS

int main(){
    SDL_Init(SDL_INIT_EVERYTHING);
    IMG_Init(IMG_INIT_PNG | IMG_INIT_JPG);
    Mix_Init(MIX_INIT_MP3);
    TTF_Init();
    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);
    
    SDL_Window* window = SDL_CreateWindow("Pokemon Game",
                                          SDL_WINDOWPOS_CENTERED,
                                          SDL_WINDOWPOS_CENTERED,
                                          1024, 720,
                                          SDL_WINDOW_SHOWN);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    loadGlobalResources(renderer);
    SDL_Event event;
    bool is_running = true;
    SDL_Color textColor = {255, 255, 255, 200}; // White color for text

    TTF_Font* font = TTF_OpenFont("../font/zh_cn.otf", 10);
    SDL_Surface* suf_icon = IMG_Load("../image/icon.png");
    SDL_Surface* suf_text = TTF_RenderText_Solid(font, "Hello, World!", textColor);
    SDL_Texture* tex_icon = SDL_CreateTextureFromSurface(renderer, suf_icon);
    SDL_Texture* tex_text = SDL_CreateTextureFromSurface(renderer, suf_text);
    SDL_Point mouse_pos = {0, 0};
    
    SDL_Rect icon_rect;
    icon_rect.w = suf_icon->w ;
    icon_rect.h = suf_icon->h ;
    SDL_Rect text_rect;
    text_rect.w = suf_text->w;
    text_rect.h = suf_text->h;
    Mix_Music* music = Mix_LoadMUS("../music/battle.mp3");
    //Mix_PlayMusic(music, -1);

   
    Uint64 frequency = SDL_GetPerformanceFrequency();
    while(is_running){
        Uint64 start = SDL_GetPerformanceCounter();
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
        text_rect.x = mouse_pos.x + 50; // Offset text position
        text_rect.y = mouse_pos.y;
        Id2Pokemon[1].on_update(delta);
        // Render the icon at the mouse position
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);
        Id2Pokemon[1].on_draw(renderer, icon_rect.x, icon_rect.y);
        SDL_RenderPresent(renderer);
        Uint64 end = SDL_GetPerformanceCounter();
        double elapsed = static_cast<double>(end - start) * 1000.0 / frequency;
        if(elapsed < delta){
            SDL_Delay(delta - elapsed);
        }
    }   
    return 0;
}