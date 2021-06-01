/*
# ______       ____   ___
#   |     \/   ____| |___|    
#   |     |   |   \  |   |       
#-----------------------------------------------------------------------
# Copyright 2021, tyra - https://github.com/h4570/tyra
# Licenced under Apache License 2.0
# Sandro Sobczyński <sandro.sobczynski@gmail.com>
*/

#ifndef _RACER_
#define _RACER_

#include <tamtypes.h>
#include <game.hpp>
#include <engine.hpp>
#include "modules/texture_repository.hpp"
#include "./camera.hpp"
#include "./objects/player.hpp"
#include "./objects/beach_ball.hpp"
#include "./objects/skybox.hpp"
#include "./objects/race_track.hpp"
#include "./objects/police_car.hpp"
#include "./objects/ammo_box.hpp"

class Racer : public Game
{

public:
    Racer(Engine *t_engine);
    ~Racer();

    void onInit();
    void onUpdate();

    Engine *engine;

private:
    Player *player;
    AmmoBox *ammoBox;
    BeachBall *beachBall;
    PoliceCar *policeCar;
    Skybox *skybox;
    RaceTrack *raceTrack;
    void setBgColorAndAmbientColor();

    TextureRepository *texRepo;
    Camera camera;
};

#endif