#pragma once
#include "SingletonBase.h"

class Ui : public SingletonBase <Ui>
{
private:
	enum Icon
	{
		ATTACK,
		FIREWALL,
		HYDRA,
		ORB
	};

	Icon iconType;

	RECT _rcHUD;
	RECT _rButton;
	RECT _lButton;

	bool _lClick;
	bool _rClick;

public:

	HRESULT init();

	void updateUI();
	void rendUI(HDC hdc);
	int cursorframe();
	void cursorRender(HDC hdc);

	Ui() {}
	~Ui();
};