/*
#  ______                
# /_  __/_  ___________ _
#  / / / / / / ___/ __ `/
# / / / /_/ / /  / /_/ / 
#/_/ /__, /_/   /___,_/  
#   /____/              
# Copyright 2022-2024, tyra - https://github.com/h4570/tyrav2
# Forked by @procopioos :p
# Licensed under Apache License 2.0
# Sandro Sobczyński <sandro.sobczynski@gmail.com>
# Simone Procopio <procopiosimone9@gmail.com>
*/

#include "racer_game.hpp"

namespace Racer {

using namespace Tyra;

RacerGame::RacerGame(Engine* t_engine) { engine = t_engine; }
RacerGame::~RacerGame() {}

void RacerGame::init() {
    
    audioHandling("mus.wav", "bgm", true, 100, 0); // audioFile, function (bgm or sfx), loop (boolean), volume, channel; This command is a shortcut for these listed under. The source can be found in /src/logic/audioHandler.cpp
    //engine->audio.song.load("mus.wav");
    //engine->audio.song.inLoop = true;
    //engine->audio.song.setVolume(100);
    //engine->audio.song.play();
   
}

void RacerGame::loop() {
    engine->renderer.beginFrame();
    engine->renderer.endFrame();
}

}  // namespace Racer
