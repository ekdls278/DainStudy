#include <iostream>
#include <queue>
#include<string>
using namespace std;

struct node		//이진트리를 위한 기본 구조
{
	string position;
	node* first;
	node* second;
};

struct org_tree		//코드에서 노드를 직접 조작하지 않기 위해서 org_tree를 새로 정의
{
	node* root;

	//루트 노드를 생성하는 함수. 여기서 루트 노드는 회사 CEO
	static org_tree create_org_structure(const string& pos)
	{
		org_tree tree;
		tree.root = new node{ pos, NULL, NULL };
		return tree;
	}
	//특정 직책 이름에 해당하는 노드를 찾아 반환하는 함수
	static node* find(node* root, const string& value)
	{
		if (root == NULL)
			return NULL;

		if (root->position == value)
			return root;
		auto firstFound = org_tree::find(root->first, value);

		if (firstFound != NULL)
			return firstFound;

		return org_tree::find(root->second, value);
	}
	//새로운 원소를 추가하는 '삽입함수'
	bool addSubordinate(const string& manager, const string& subordinate)
	{
		auto managerNode = org_tree::find(root, manager);

		if (!managerNode)
		{
			cout << manager << "을(를) 찾을 수 없습니다: " << endl;
			return false;
		}

		if (managerNode->first && managerNode->second)
		{
			cout << manager << " 아래에 " << subordinate << "을(를) 추가할 수 없습니다." << endl;
			return false;
		}

		if (!managerNode->first)
			managerNode->first = new node{ subordinate, NULL, NULL };
		else
			managerNode->second = new node{ subordinate, NULL, NULL };

		cout << manager << " 아래에 " << subordinate << "을(를) 추가했습니다." << endl;

		return true;
	}
};

int main()
{
	auto tree = org_tree::create_org_structure("CEO");

	tree.addSubordinate("CEO", "부사장");
	tree.addSubordinate("부사장", "IT부장");
	tree.addSubordinate("부사장", "마케팅부장");
	tree.addSubordinate("IT부장", "보안팀장");
	tree.addSubordinate("IT부장", "앱개발팀장");
	tree.addSubordinate("마케팅부장", "물류팀장");
	tree.addSubordinate("마케팅부장", "홍보팀장");
	tree.addSubordinate("부사장", "재무부장");
}
