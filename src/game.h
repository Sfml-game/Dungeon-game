#include <string>
#include <SFML/Graphics.hpp>
#include <unistd.h>

class Game {
	private:
		sf::RenderWindow* window;
		sf::VideoMode videoMode;
		sf::Event events;

		void initVariables();
		void initWindow();

	public:
		Game(int delay);
		virtual ~Game();
		
		int delay;
		bool isOpen();

		void pollEvents();
		void render();
		void update();
};