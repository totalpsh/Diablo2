#pragma once
#include "SingletonBase.h"
#include"Astar.h"

struct tagTile
{
	int _pivotX;
	int _pivotY;
};

struct POINTF
{
	float x;
	float y;
};

struct Point
{
	int x;
	int y;
};

class Map : public SingletonBase <Map>
{
private:

	tagTile _tileInfo[40][40];

	bool _run;

	int _width;
	int _height;

	int _halfWidth;
	int _halfHeight;

	int _destTileX;
	int _destTileY;

	POINT _start;
	float _startDrawX;
	float _startDrawY;

	double _deltaX;
	double _deltaY;

	double _angle;

	int _speed;

	int _count;

	POINT _ptPlayer;
	int _currentX;
	int _currentY;
	int _currentNodeX;
	int _currentNodeY;

	int _endX;
	int _endY;
	int _endNodeX;
	int _endNodeY;

	float _inclineX;
	float _inclineY;

	int _axisX;
	int _axisY;

	int _directX;
	int _directY;

	RECT _non;

	list<int> _pathPointX;
	list<int> _pathPointY;

	bool _move;

	int _entryFrame;

	int _moveX;
	int _moveY;

	int _moveToX;
	int _moveToY;

	int _moveFrame;
	int index;
	int f;

public:

	HRESULT init();

	tagTile getTileInfo(int x, int y) { return _tileInfo[x][y]; };

	void setPlayer(POINT player) { _ptPlayer = player; }

	void setAngle(double angle) { _angle = angle; }

	void MakeTile(HDC hdc);

	void PathView(HDC hdc);

	POINT PlayerTile();

	POINT CursorTile();

	void MotionSignal();

	void TileMove(list<Node> path);

	Map() {}
	~Map() {}
};

