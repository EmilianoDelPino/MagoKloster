#pragma once
#include "Enemigo.h"
#include "PersonajePrincipal.h"
#include "mapa.h"
#include "Mazo.h"

class gamePlay
{
private:	
	float frame , x, y;
	sf::Vector2f pos;// = kloster.getPosition();	
	//PersonajePrincipal p;
	mapa mapaPrincipal;
	//Enemigo e;
	
public:
	gamePlay();
	void collisionObjetos(PersonajePrincipal& p, Enemigo& e, sf::RenderWindow* window);
	void collisionMapa(PersonajePrincipal& p);
	void mostrarVentana(sf::RenderWindow* window, Enemigo& e, PersonajePrincipal& p);
};

