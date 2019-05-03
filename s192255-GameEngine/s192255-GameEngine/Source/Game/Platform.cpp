#include "Platform.h"



Platform::Platform(int posX, int posY, float rot)
{
	initalPos = b2Vec2(posX, posY);
	initalRot = rot;
}


Platform::~Platform()
{
}

void Platform::Load(b2World *World)
{
	//initalPos = b2Vec2(500, 500);
	givePhysicsBody(World, b2BodyType::b2_staticBody);
	body->SetTransform(initalPos, 180 / 3.14 * initalRot);
	//body->SetTransform(initalPos, body->GetAngle());
}

void Platform::Update()
{
}