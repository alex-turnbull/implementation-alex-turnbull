#pragma once
#include "EventManager.h"
#include "../Rendering/Window.h"

#include <SFML/Graphics.hpp>


class EventManager;
///Handles the keyboard events polled from the Event Manager
class InputManagement
{
public:
	InputManagement();
	~InputManagement();

	void Listen(); //!< await for events to be polled by the Event Manager and handle them as such

	EventManager* eventHandler; //!< store a refence to the Event Management System
	sf::Event currentEvent; //!< Temporary storage of the current event being handled

	enum playerActions //!< Defining the list of actions that the user can have on a player class
	{
		moveRight,
		moveLeft,
		jump,
		stop,
		no
	};

	playerActions currentAction = no;
};

