#pragma once

#include "Actor.h"

class ActorSnake : public Actor
{
public:
	ActorSnake() {}
   ~ActorSnake() {}
	
	void Load()  override;
	void Update()override;
	void Render()override;
};

