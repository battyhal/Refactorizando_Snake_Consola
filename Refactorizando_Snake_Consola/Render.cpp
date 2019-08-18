#include "Render.h"

#include<iostream>
#include"Constants.h"
#include"rlutil.h"

using namespace rlutil;

Render & Render::Get()
{
	static Render renderSingleton;
	return renderSingleton;
}

bool Render::Load()
{
	return false;
}

void Render::Draw(int x, int y, char c)
{
	locate(x, y);
	std::cout << c;
}

void Render::Frame()
{
	char floor = 205;
	char wall  = 186;
	char rightSupCorner  = 187;
	char rightBottCorner = 188;
	char leftBottCorner  = 200;
	char leftSupCorner   = 201;

	for (int i = 2; i < WIDTH; i++)
	{
		locate(i, 3);
		std::cout << floor;
		locate(i, HEIGHT);
		std::cout << floor;
	}
	for (int j = 3; j < HEIGHT; j++)
	{
		locate(2, j);
		std::cout << wall;
		locate(WIDTH, j);
		std::cout << wall;
	}
	locate(2, 3);
	std::cout << leftSupCorner;
	locate(2, HEIGHT);
	std::cout << leftBottCorner;
	locate(WIDTH, 3);
	std::cout << rightSupCorner;
	locate(WIDTH, HEIGHT);
	std::cout << rightBottCorner;
}

void Render::KeysInfo()
{
	locate(WIDTH + 3, 2);
	std::cout << " UP    : KEY UP";
	locate(WIDTH + 3, 3);
	std::cout << " DOWN  : KEY DOWN";
	locate(WIDTH + 3, 4);
	std::cout << " LEFT  : KEY LEFT";
	locate(WIDTH + 3, 5);
	std::cout << " RIGHT : KEY RIGHT";
	locate(WIDTH + 3, 6);
	std::cout << " EXIT  : ESCAPE";
}
