#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;
//////Variables//////
Texture Fondo;
Sprite f1;
Sprite f2;
Sprite f3;
Sprite f4;
Sprite f5;
Sprite f6;
Sprite f7;
Sprite f8;

int main() {
	//Cargamos la textura del archivo
	Fondo.loadFromFile("fondo.jpg");
	//Cargamos el material del sprite
	f1.setTexture(Fondo);
	f2.setTexture(Fondo);
	f3.setTexture(Fondo);
	f4.setTexture(Fondo);
	f5.setTexture(Fondo);
	f6.setTexture(Fondo);
	f7.setTexture(Fondo);
	f8.setTexture(Fondo);
	//Movemos el sprite
	f1.setPosition(33, 550);
	f1.setScale((float)33 / Fondo.getSize().x, (float)50 / Fondo.getSize().y);
	f2.setPosition(99, 500);
	f2.setScale((float)33 / Fondo.getSize().x, (float)100 / Fondo.getSize().y);
	f3.setPosition(165, 450);
	f3.setScale((float)33 / Fondo.getSize().x, (float)150 / Fondo.getSize().y);
	f4.setPosition(232, 400);
	f4.setScale((float)33 / Fondo.getSize().x, (float)200 / Fondo.getSize().y);
	f5.setPosition(300, 350);
	f5.setScale((float)33 / Fondo.getSize().x, (float)250 / Fondo.getSize().y);
	f6.setPosition(366, 300);
	f6.setScale((float)33 / Fondo.getSize().x, (float)300 / Fondo.getSize().y);
	f7.setPosition(433, 250);
	f7.setScale((float)33 / Fondo.getSize().x, (float)350 / Fondo.getSize().y);
	f8.setPosition(500, 250);
	f8.setScale((float)290 / Fondo.getSize().x, (float)20 / Fondo.getSize().y);
	//Creamos la ventana
	sf::RenderWindow App(sf::VideoMode(800, 600, 32),
		"Que ventana horrible");
	// Loop principal
	while (App.isOpen()) {
		// Limpiamos la ventana
		App.clear();
		// Dibujamos la escena
		App.draw(f1);
		App.draw(f2);
		App.draw(f3);
		App.draw(f4);
		App.draw(f5);
		App.draw(f6);
		App.draw(f7);
		App.draw(f8);
		// Mostramos la ventana
		App.display();
	}
	return 0;
}



