#include "MoveComponent.h"

#include"Constants.h"
#include"Input.h"

void MoveComponent::Update(float timeDelta)
{
	int move = Input::Get().PlayerInput();
	{
		switch (move)
		{
		case directions::UP:
			m_y--;
			break;
		case directions::DOWN:
			m_y++;
			break;
		case directions::LEFT:
			m_x--;
			break;
		case directions::RIGHT:
			m_x++;
			break;
		default:
			break;
		}
	}
}
