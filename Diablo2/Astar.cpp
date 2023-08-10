#include "Stdafx.h"
#include "Astar.h"


list<Node> Astar::astar(int startX, int startY, int targetX, int targetY)
{
    priority_queue<Node, vector<Node>, CompareNode> openList;
    // open ����Ʈ�� closed ����Ʈ ����

    list<Node> closeList;

    // ��� ����
    list<Node> path;
   
	// ���� ���� ��ǥ ��� ����
    Node start(startX, startY, 0, 0);
	Node end(targetX, targetY, 0, 0);

    // ���� ��带 open ����Ʈ�� �߰�
	openList.push(start); 

    // open����Ʈ�� ����ִ� �ʴ� ����
    while (!openList.empty()) 
    {
        // open ����Ʈ���� F ���� ���� ���� ��� ����
        Node current = openList.top(); 

        //openList.pop(); 
        openList = priority_queue<Node, vector<Node>, CompareNode>();

        // ������ ��尡 ��ǥ ������� Ȯ��
        if (current._x == end._x && current._y == end._y) 
        {
            break;
        }

        // ������ Ÿ�� ��ȸ
        for (int i = -1; i <= 1; i++)
        {
            for (int j = -1; j <= 1; j++) 
            {
                if (i == 0 && j == 0)
                {
                    continue;
                }

                int newX = current._x + i;
                int newY = current._y + j;

                // �̹� closed ����Ʈ�� �ִ� ������� Ȯ��
                /*if (closeList. == newX) 
                {
                    continue;
                }*/

                float gCost = 0;

                if ((i == -1 || i == 1) && j == 0)
                {
                    gCost = current._g + 1.4f;
                }
                else if (i == 0 && (j == -1 || j == 1))
                {
                    gCost = current._g + 1.4f;
                }
                else if ((i == -1 && j == 1) || (j == -1 && i == 1))
                {
                    gCost = current._g + 1.f;
                }
                else if ((i == 1 && j == 1) || (i == -1 && j == -1))
                {
                    gCost = current._g + 1.f;
                }
                else if (i == 0 && j == 0)
                {
                    continue;
                }
                
                float hCost = abs(newX - end._x) + abs(newY - end._y);

                // �̿� ��� ����
                Node neighbor(newX, newY, gCost, hCost, &current);

                // �̿� ��带 open ����Ʈ�� �߰�
                openList.push(neighbor);
            }
        }
        closeList.push_back(openList.top());

        // ��θ� �������Ͽ� path�� ����
    }

    while (!closeList.empty())
    {
        path.push_back(closeList.back());

        closeList.pop_back();
    }

    return path;
}