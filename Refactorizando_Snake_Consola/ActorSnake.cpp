#include "SnakeGameObject.h"

#include"MoveComponent.h"

void SnakeGameObject::Load()
{
	SetComponent<MoveComponent>();
}

void SnakeGameObject::Update()
{
	for (auto &a : m_components)
	{
		a->Update();
	}
}

void SnakeGameObject::Render()
{

}
