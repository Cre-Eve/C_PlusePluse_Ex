#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
	sf::RenderWindow window(sf::VideoMode(1024, 768), "SFML works!");

	sf::Font font;

	if (!font.loadFromFile("../resources/font/arial.ttf")) {
		std::cout << "Font Loading Error!" << std::endl;
	}

	sf::RectangleShape shape(sf::Vector2f{100.0f, 20.0f});
	shape.setFillColor(sf::Color::Green);
	shape.setPosition(50, 50);

	sf::Text text;
	text.setFont(font);
	text.setString("Hello SFML!");
	text.setCharacterSize(24);
	text.setFillColor(sf::Color::Magenta);

	while (window.isOpen()) {
		sf::Event event;

		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		window.clear();

		window.draw(shape);
		window.draw(text);

		window.display();
	}
}
