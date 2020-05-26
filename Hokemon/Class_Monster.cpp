#include <stdio.h>

enum Type { normal, fire, water, grass };

struct MonsterSkill
{
	char sName[20] = { NULL };

	unsigned int pp = 0;
	int sDamage = 0;
	enum Type sType = normal;
};

class Monster
{
private:
	unsigned int mNum = 0;

	int mHp = 0;
	unsigned int mAtk = 0;
	unsigned int mGrd = 0;
	unsigned int mSpd = 0;

	enum Type mType = normal;

	MonsterSkill mskill;

public :

	/*Monster class getset*/

	unsigned int GetmNum() { return mNum; }
	void SetmNum(unsigned int _mNum) { mNum = _mNum;}
	
	int GetmHp() { return mHp; }
	void SetmHp(int _mHp) { mHp = _mHp; }
	
	unsigned int GetmAtk() { return mAtk; }
	void SetmAtk(unsigned int _mAtk) { mAtk = _mAtk; }
	
	unsigned int GetmGrd() { return mGrd; }
	void SetmGrd(unsigned int _mGrd) { mGrd = _mGrd; }
	
	unsigned int GetmSpd() { return mSpd; }
	void SetmSpd(unsigned int _mSpd) { mSpd = _mSpd; }

	enum Type GetmType() { return mType; }
	void SetmType(enum Type _mType) { mType = _mType; }

	/*MonsterSkill struct getset*/

	char GetsName() { return mskill.sName[20]; }
	void SetsName( int _sName) { mskill.sName[20] = _sName; }

	unsigned int Getpp() { return mskill.pp; }
	void Setpp(unsigned int _pp) { mskill.pp = _pp; }

	int GetsDamage() { return mskill.sDamage; }
	void SetsDamage(int _sDamage) { mskill.sDamage = _sDamage; }

	enum Type GetsType() { return mskill.sType; }
	void SetsType(enum Type _sType) { mskill.sType = _sType; }
};