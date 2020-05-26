#include <stdio.h>
#include "Class_Monster.cpp"

class Player
{
private:
	char pName[12] = { NULL };
	unsigned int pGender = 0;					// 1:male   2:female
	int pMoney = 1000;

	int pX = 0;
	int pY = 0;

	Monster MyMonster;

public:

	/*Player Class getset*/

	char GetpName() { return pName[12]; }
	void SetpName(int _pName) { pName[12] = _pName; }

	unsigned int GetpGender() { return pGender; }
	void SetpGender(unsigned int _pGender) { pGender = _pGender; }

	int GetpMoney() { return pMoney; }
	void SetpMoney(int _pMoney) { pMoney = _pMoney; }

	int GetpX() { return pX; }
	void SetpX(int _pX) { pX = _pX; }

	int GetpY() { return pY; }
	void SetpY(int _pY) { pY = _pY; }
};