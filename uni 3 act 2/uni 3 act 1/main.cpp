#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;
//////Variables//////
Texture texture_white;
Texture texture_black;
Sprite celda[64];

int main() {
	//Cargamos la textura del archivo
	texture_white.loadFromFile("chessw.png");
	texture_black.loadFromFile("chessb.png");
	//Cargamos el material del sprite
	for (int i = 0; i < 32; i++) {
		celda[2 * i].setTexture(texture_white);
			celda[1 + (2 * i)].setTexture(texture_black);
	}
	//Movemos el sprite
	for (int i = 0; i < 64; i++) { //escalar
		celda[i].setScale((float)100 / texture_white.getSize().x, (float)100 / texture_white.getSize().y);
		}
	for (int i = 0; i < 4; i++) { //posición
		for (int v = 0; v < 8; v++) {
			celda[v + (i * 16)].setPosition(v * 100, i * 200);
			celda[(v + 8) + (i * 16)].setPosition(700 - (v * 100), 100 + (i * 200));
		}
	}
	//Creamos la ventana
	sf::RenderWindow App(sf::VideoMode(800, 800, 32),
		"Que ventana horrible");
	// Loop principal
	while (App.isOpen()) {
		// Limpiamos la ventana
		App.clear();
		// Dibujamos la escena
		for (int i = 0; i < 64; i++) {
			App.draw(celda[i]);
		}
		// Mostramos la ventana
		App.display();
	}
	return 0;
}


