#pragma once
/*
 
 각 칸의 이동거리와 도착지점 과의 직서거리의 합으로 최단거리를 찾는다.

 - 노드의 구성
 플레이어의 위치
 점수 => G, H, F
 부모 노드 - 포인터

 각 노드의 크기는 10

 수평 수직 : 10
 대각선 : 
 8방향

 - 오픈노드에 첫 노드 삽입
 - 주변 노드 점수 확인
 - 오픈노드에 삽입 후 f값을 기준으로 정렬
 - 비용(f) 가 가장 낮은 값을 삭제하고 클로즈 노드에 넣는다.
 - 

*/

struct Node
{
	int _x;
	int _y;

	float _g;
	float _h;
	float _f;

	Node* _parent;

	Node(int x, int y, float g, float h, Node* parent = nullptr) : _x(x), _y(y), _g(g), _h(h), _parent(parent)
	{
		_f = _g + _h;
	}

};

struct CompareNode 
{
	bool operator()(const Node& node1, const Node& node2)
	{
		return node1._f > node2._f;
	}
};


class Astar : public SingletonBase<Astar>
{
public:

    list<Node> astar(int startX, int startY, int targetX, int targetY);

	Astar() {}
	~Astar() {}
};

