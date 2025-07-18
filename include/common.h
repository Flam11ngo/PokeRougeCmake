#pragma once
#include<iostream>
#include<SDL.h>
#include<SDL_ttf.h>
#include<SDL_mixer.h>
#include<SDL_image.h>
#include"SDL_gfxPrimitives.h"
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<cmath>
#include<functional>
#include<unordered_map>
#include<random>

enum class Type{
    Normal,
    Fighting,
    Flying,
    Poison,
    Ground,
    Rock,
    Bug,
    Ghost,
    Steel,
    Fire,
    Water,
    Grass,
    Electric,
    Psychic,
    Ice,
    Dragon,
    Dark,
    Fairy,
    Count 
};

enum class Status{
    None,
    Poisoned,
    Burned,
    Frozen,
    Paralyzed,
    Asleep,
    Confused,
    Count
};

enum class MoveCategory{
    Physical,
    Special,
    Status,
    Count
};
