#pragma once

#include"rlutil.h"

class Input
{
public:
	static Input& Get();

	int PlayerInput();


private:
	Input();
	~Input(){}

};

