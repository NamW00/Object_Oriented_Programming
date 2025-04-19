#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node* left;
	struct Node* right;
};

void Inorder(Node* Root)
{
	if (Root == NULL)
	{
		return;
	}
	Inorder(Root->left);
	printf("%d ", Root->data);
	Inorder(Root->right);
}

int main()
{
	int i, num = 0;
	Node* Root = NULL;
	Node* InitRoot;
	Node* Parent = NULL;
	Node* Current;

	for (i = 1; i <= 5; i++)
	{
		Current = (Node*)malloc(sizeof(Node));
		printf("%d번째 데이터 입력 :", i);
		scanf("%d", &num);
		Current->data = num;
		Current->left = NULL;
		Current->right = NULL;

		if (Root == NULL)
		{
			Root = Current;
			InitRoot = Root;
			continue;
		}
		while (true)
		{
			Parent = InitRoot;
			if (InitRoot->data > Current->data)
			{
				if (InitRoot->left)
				{
					InitRoot = InitRoot->left;
				}
				else
				{
					InitRoot->left = Current;
					break;
				}
			}
			else
			{
				if (InitRoot->right)
				{
					InitRoot = InitRoot->right;
				}
				else
				{
					InitRoot->right = Current;
					break;
				}
			}
		}
		Parent = Current;
		InitRoot = Root;
	}

	printf("양방향 링크드 리스트(오름차순) : ");
	Inorder(InitRoot);

	return 0;
}