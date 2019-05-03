#pragma once
#include "../../Game/GameObject.h"

#include <iostream>
#include <fstream>
#include <document.h>
#include <filereadstream.h>

///The Scene Manager parses a JSON text file and generates the GameObjects for the level
class SceneManager
{
public:
	SceneManager();
	~SceneManager();

	void parseSceneFromFile(std::string levelFileDir); //!< Read a provided JSON level file and parse the data

	struct GameObjectDef //!< Definition for how GameObjects in the Level JSON should be constructed
	{
		std::string type;
		sf::Vector2f position;
		float rotation;
		std::string spriteName;
	};

	std::vector<GameObjectDef*> GameObjects; //!< Store a list of generated GameObjects from the parsed JSON
};

