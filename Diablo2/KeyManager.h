#pragma once
#include "SingletonBase.h"

#define KEY_MAX 256

class KeyManager : public SingletonBase <KeyManager>
{
private:
	bitset<KEY_MAX> _keyUp;
	bitset<KEY_MAX> _keyDown;
public:
	HRESULT init();

	bool isOnceKeyDown(int key);
	bool isStayKeyDown(int key);
	bool isOnceKeyUp(int key);
	bool isToggleKey(int key);

	bitset<KEY_MAX> getKeyUp(void) { return _keyUp; }
	bitset<KEY_MAX> getKeyDown(void) { return _keyDown; }

	void setKeyUp(int key, bool state) { _keyUp.set(key, state); }
	void setKeyDown(int key, bool state) { _keyDown.set(key, state); }

	KeyManager() {}
	~KeyManager() {}
};