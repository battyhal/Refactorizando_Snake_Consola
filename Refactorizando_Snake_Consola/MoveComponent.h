#pragma once

#include"Component.h"

class MoveComponent : public Component
{
public:
	MoveComponent(){}
	~MoveComponent(){}

	void Update(float timeDelta)override;

private:
	float m_x;
	float m_y;

};

