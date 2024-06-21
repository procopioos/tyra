#pragma once

#include <tyra>

namespace Racer {

class RacerGame : public Tyra::Game {
 public:
  RacerGame(Tyra::Engine* engine);
  ~RacerGame();

  void init();
  void loop();
  void audioHandling(char* audioFile, char* funct, bool loop, int vol, int chan);
 private:
  Tyra::Engine* engine;
};

}  // namespace Racer
