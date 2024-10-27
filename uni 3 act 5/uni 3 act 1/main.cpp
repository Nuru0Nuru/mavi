#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;
//////Variables//////
Texture Fondo;
Sprite objeto;


int main() {
	//Cargamos la textura del archivo
	Fondo.loadFromFile("chessw.png");
	//Cargamos el material del sprite
	objeto.setTexture(Fondo);
	//Movemos el sprite
	objeto.setPosition(340,240);
	objeto.setOrigin(objeto.getLocalBounds().width / 2, objeto.getLocalBounds().height / 2);
	//Creamos la ventana
	sf::RenderWindow App(sf::VideoMode(800, 600, 32),
		"Que ventana horrible");
	// Loop principal
	while (App.isOpen()) {
		objeto.rotate(0.5);
		// Limpiamos la ventana
		App.clear();
		// Dibujamos la escena
		App.draw(objeto);
		// Mostramos la ventana
		App.display();
	}
	return 0;
}



