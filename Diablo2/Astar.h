#pragma once
/*
 
 �� ĭ�� �̵��Ÿ��� �������� ���� �����Ÿ��� ������ �ִܰŸ��� ã�´�.

 - ����� ����
 �÷��̾��� ��ġ
 ���� => G, H, F
 �θ� ��� - ������

 �� ����� ũ��� 10

 ���� ���� : 10
 �밢�� : 
 8����

 - ���³�忡 ù ��� ����
 - �ֺ� ��� ���� Ȯ��
 - ���³�忡 ���� �� f���� �������� ����
 - ���(f) �� ���� ���� ���� �����ϰ� Ŭ���� ��忡 �ִ´�.
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

