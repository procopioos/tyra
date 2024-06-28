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

#include <racer_game.hpp>
#include <engine.hpp>
namespace Racer {
    using namespace Tyra;
    Engine* engine;
    void RacerGame::audioHandling(char* audioFile, char* funct, bool loop, int vol, int chan) {
        if (funct == "bgm") {
            engine->audio.song.load(audioFile);
            engine->audio.song.inLoop = loop;
            engine->audio.song.setVolume(vol);
            engine->audio.song.play();
        }
        if (funct == "sfx") {
            sample = engine->audio.adpcm.load(FileUtils::fromCwd(audioFile));
            engine->audio.adpcm.setVolume(vol, chan);
            if (engine->audio.adpcm.tryPlay(sample, 0) == ADPCM_CHANNEL_USED) {
                    TYRA_WARN("Channel is already being used. Try another one!");
            }

        }

    }
}