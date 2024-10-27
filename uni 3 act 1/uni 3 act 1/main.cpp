#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;
//////Variables//////
Texture texture_color;
Sprite spriteiu;
Sprite spriteid;
Sprite spritedu;
Sprite spritedd;


int main() {
	//Cargamos la textura del archivo
	texture_color.loadFromFile("rcircle.png");
	//Cargamos el material del sprite
	spriteiu.setTexture(texture_color);
	spriteid.setTexture(texture_color);
	spritedu.setTexture(texture_color);
	spritedd.setTexture(texture_color);
	//Movemos el sprite
	spriteiu.setPosition(0, 0);
	spriteid.setPosition(0, 472);
	spritedu.setPosition(672, 0);
	spritedd.setPosition(672, 472);
	//Creamos la ventana
	sf::RenderWindow App(sf::VideoMode(800, 600, 32),
		"Que ventana horrible");
	// Loop principal
	while (App.isOpen()) {
		// Limpiamos la ventana
		App.clear();
		// Dibujamos la escena
		App.draw(spriteiu);
		App.draw(spriteid);
		App.draw(spritedu);
		App.draw(spritedd);
		// Mostramos la ventana
		App.display();
	}
	return 0;
}



