#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};

int main() {
	int i;
	struct Node* pStart = NULL; // 첫 번째 노드 포인터
	struct Node* pEnd = NULL;	// 마지막 노드 포인터
	struct Node* Current;		// 새로 추가할 노드 포인터

	for (i = 0; i <= 5; i++)
	{
		Current = (struct Node*)malloc(sizeof(struct Node));
		Current->data = i;
		Current->next = NULL;

		if (pStart == NULL)
		{
			pStart = pEnd = Current; // 노드 생성
		}
		else
		{
			pEnd->next = Current; // Current를 pEnd가 가리키는 방향의 다음노드로 보냄
			pEnd = Current; // pEnd
		}
	}

	Current = pStart;
	while (Current != NULL)
	{
		printf("%d\n", Current->data);
		Current = Current->next;
	}

	return 0;
}
