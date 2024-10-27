#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;
//////Variables//////
Texture Fondo;
Sprite fondo;

int main() {
	//Cargamos la textura del archivo
	Fondo.loadFromFile("fondo.jpg");
	//Cargamos el material del sprite
	fondo.setTexture(Fondo);
	//Movemos el sprite
	fondo.setPosition(0, 0);
	fondo.setScale(((float)800 / Fondo.getSize().x), ((float)600 / Fondo.getSize().y));
	//Creamos la ventana
	sf::RenderWindow App(sf::VideoMode(800, 600, 32),
		"Que ventana horrible");
	// Loop principal
	while (App.isOpen()) {
		// Limpiamos la ventana
		App.clear();
		// Dibujamos la escena
		App.draw(fondo);
		// Mostramos la ventana
		App.display();
	}
	return 0;
}



