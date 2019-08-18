#include "Input.h"

#include"Constants.h"

Input & Input::Get()
{
	static Input inputSingleton;
	return inputSingleton;
}

int Input::PlayerInput()
{
	char key = rlutil::getkey();
	switch (key)
	{
	case rlutil::KEY_UP:
		return directions::UP;
		break;
	case rlutil::KEY_DOWN:
		return directions::DOWN;
		break;
	case rlutil::KEY_LEFT:
		return directions::LEFT;
		break;
	case rlutil::KEY_RIGHT:
		return directions::RIGHT;
		break;
	default:
		break;
	}

	return -1;
}


