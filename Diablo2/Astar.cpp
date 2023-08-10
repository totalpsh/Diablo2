#include "Stdafx.h"
#include "Astar.h"


list<Node> Astar::astar(int startX, int startY, int targetX, int targetY)
{
    priority_queue<Node, vector<Node>, CompareNode> openList;
    // open 리스트와 closed 리스트 생성

    list<Node> closeList;

    // 경로 저장
    list<Node> path;
   
	// 시작 노드와 목표 노드 생성
    Node start(startX, startY, 0, 0);
	Node end(targetX, targetY, 0, 0);

    // 시작 노드를 open 리스트에 추가
	openList.push(start); 

    // open리스트가 비어있는 않는 동안
    while (!openList.empty()) 
    {
        // open 리스트에서 F 값이 가장 작은 노드 선택
        Node current = openList.top(); 

        //openList.pop(); 
        openList = priority_queue<Node, vector<Node>, CompareNode>();

        // 선택한 노드가 목표 노드인지 확인
        if (current._x == end._x && current._y == end._y) 
        {
            break;
        }

        // 인접한 타일 순회
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

                // 이미 closed 리스트에 있는 노드인지 확인
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

                // 이웃 노드 생성
                Node neighbor(newX, newY, gCost, hCost, &current);

                // 이웃 노드를 open 리스트에 추가
                openList.push(neighbor);
            }
        }
        closeList.push_back(openList.top());

        // 경로를 역추적하여 path에 저장
    }

    while (!closeList.empty())
    {
        path.push_back(closeList.back());

        closeList.pop_back();
    }

    return path;
}