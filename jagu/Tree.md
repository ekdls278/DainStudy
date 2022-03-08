# Tree
### -Preorder traversal : 
현재 노드 -> 왼쪽 하위 노드 -> 오른쪽 하위 노드

```C++
static void preOrder(node* start)
{
	if (!start)
		return;

	cout << start->position << ", ";
	preOrder(start->first);
	preOrder(start->second);
}
```
### -In-order traversal :
왼쪽 노드 -> 현재 노드 -> 오른쪽 노드

```C++
static void inOrder(node* start)
{
	if (!start)
		return;

	inOrder(start->first);
	cout << start->position << ", ";
	inOrder(start->second);

}
```
### -Post-order traversal:
두 자식 노드 -> 현재노드
```C++
static void postOrder(node* start)
{
	if (!start)
		return;

	postOrder(start->first);
	postOrder(start->second);
	cout << start->position << ", ";
}
```




### -Level order traversal: 
맨 위 레벨부터 아래 레벨까지 왼쪽 노드에서 오른쪽 노드
org_tree 구조체 안에 구현

```C++
static void levelOrder(node* start)
{
	if (!start)
		return;

	queue<node*> q;
	q.push(start);
	
	while (!q.empty())
	{
		int size = q.size();
		for (int i = 0; i < size; i++)
		{
			auto current = q.front();
			q.pop();

			cout << current->position << ", ";
			if (current->first)
				q.push(current->first);
			if (current->second)
				q.push(current->second);
		}
		cout << endl;
	}
}
```

### BST(Binary Search Tree)
부모 노드의 값 >= 왼쪽 자식 노드의 값
부모 노드의 값 <= 오른쪽 자식 노드의 값
(왼쪽 노드 <= 부모 노드 <= 오른쪽 노드)


