#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;
//////Variables//////
Texture Rojo;
Texture Amarillo;
Texture Azul;
Texture Gris;

Sprite rojo;
Sprite amarillo;
Sprite azul;
Sprite gris;

int main() {
	//Cargamos la textura del archivo
	Rojo.loadFromFile("cuad_red.png");
	Amarillo.loadFromFile("cuad_yellow.png");
	Azul.loadFromFile("cuad_blue.png");
	Gris.loadFromFile("cuad_grey.png");
	//Cargamos el material del sprite
	rojo.setTexture(Rojo);
	gris.setTexture(Gris);
	azul.setTexture(Azul);
	amarillo.setTexture(Amarillo);
	//Movemos el sprite
	rojo.setPosition(200, 100);
	rojo.setScale((float)200 / Rojo.getSize().x, (float)200 / Rojo.getSize().y);
	amarillo.setPosition(400, 100);
	amarillo.setScale((float)200 / Amarillo.getSize().x, (float)200 / Amarillo.getSize().y);
	azul.setPosition(200, 300);
	azul.setScale((float)200 / Azul.getSize().x, (float)200 / Azul.getSize().y);
	gris.setPosition(400, 300);
	gris.setScale((float)200 / Gris.getSize().x, (float)200 / Gris.getSize().y);
	//Creamos la ventana
	sf::RenderWindow App(sf::VideoMode(800, 600, 32),
		"Que ventana horrible");
	// Loop principal
	while (App.isOpen()) {
		// Limpiamos la ventana
		App.clear();
		// Dibujamos la escena
		App.draw(rojo);
		App.draw(amarillo);
		App.draw(azul);
		App.draw(gris);
		// Mostramos la ventana
		App.display();
	}
	return 0;
}



