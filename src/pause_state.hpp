#ifndef PAUSE_STATE_HPP
#define PAUSE_STATE_HPP

#include <SFML/Graphics/Text.hpp>
#include "state.hpp"
#include "game.hpp"

namespace kg {
    class PauseState : public State {
        public:
            PauseState(GameDataRef data);

            void init();

            void handleInput();
            void update(float dt) { } // Nothing to do here.
            void render(float dt);

        private:
            GameDataRef _data;

            sf::Text _text;
    };
}

#endif // PAUSE_STATE_HPP
