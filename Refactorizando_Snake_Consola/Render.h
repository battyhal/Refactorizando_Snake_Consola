#pragma once


class Render
{
public:
	static Render& Get();

	bool Load ();
	void Draw (int x, int y, char c);
	void CLS  ()   { rlutil::cls(); }
	void Frame();
	void KeysInfo();

private:
	Render(){}
   ~Render(){}
	
};

