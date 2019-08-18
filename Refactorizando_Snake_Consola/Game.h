#ifndef GAME_H
#define GAME_H

#include<iostream>
#include<vector>
#include<memory>

#include "Constants.h"
#include "Actor.h"
#include "rlutil.h"

class Game 
{
public:
	
	static Game& Get();

	bool Init();
	void HandleEvents();
	void Update();
	void Render();
	void Run();
	void CleanAndExit();

private:
	Game(){}
	~Game(){}
	bool  abajo;
	bool  arriba;
	bool  derecha;
	bool  izquierda;
	bool  game_over;
	const int ABAJO     = 80;
	const int ARRIBA    = 72;
	const int DERECHA   = 77;
	const int IZQUIERDA = 75;
	const int ESCAPE    = 27;
	int   ultima_tecla_pulsada;
	int   ultimo_movimiento;
	
	std::vector<std::unique_ptr<Actor>>m_gameObjects;

};

#endif

