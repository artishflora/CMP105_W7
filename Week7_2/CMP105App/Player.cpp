#include "Player.h"

Player::Player()
{
	setPosition(200, 200);
	setSize(sf::Vector2f(100, 100));
	posx = 0;
	posy = 0;
}


Player::~Player()
{
}

void Player::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Space))
	{
		input->setKeyUp(sf::Keyboard::Space);
		posx = rand() % 600;
		posy = rand() % 400;
		setPosition((float)posx, (float)posy);
	}

	if (input->isKeyDown(sf::Keyboard::Enter))
	{
		input->setKeyUp(sf::Keyboard::Enter);
		bullet.setPosition((float)posx, (float)posy);
	}
}