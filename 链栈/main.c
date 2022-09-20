# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>

typedef struct Linknode {
	int data;
	struct Linknode* next;
}Stack,*LisStack;

//����һ��ջ
LisStack testStack(){
	LisStack L = (LisStack)malloc(sizeof(Stack));
	return L;
}
//��ʼ��ջ
void InitStack(LisStack L) {
	L->next = NULL;
}

//�ж�ջ��
void StackEmpty(LisStack L) {
	if (L->next == NULL) {
		printf("��ջΪ�գ�\n\n");
	}
	else {
		printf("��ջ��Ϊ�գ�\n\n");
	}
}

//��ջ
bool Push(LisStack L, int x) {
	LisStack S = (LisStack)malloc(sizeof(Stack));
	if (S == NULL) {
		printf("�ڴ治�㣬����ռ�ʧ�ܣ�\n\n");
		return false;
	}
	S->data = x;
	S->next = L->next;
	L->next = S;

	return true;
}


//��ջ
void Pop(LisStack L) {
	if (L->next != NULL) {
		printf("��ջ��Ԫ����%d\n\n", L->next->data);
		LisStack S = L->next;
		L->next = L->next->next;
		free(S);
	}
	else
		printf("��ջ�ѿ�!!!\n\n");
	return true;
}

//��ջ��
void GetTop(LisStack L) {
	if (L->next != NULL) {
		printf("ջ����Ԫ����%d\n\n", L->next->data);
	}
	else
		printf("��ջ�ѿ�!!!\n\n");
	return true;
}


int main() {
	LisStack L = testStack();
	InitStack(L);
	StackEmpty(L);
	Push(L, 110);
	Push(L, 120);
	Push(L, 119);
	StackEmpty(L);
	GetTop(L);
	Pop(L);
	GetTop(L);
	Pop(L);
	GetTop(L);
	Pop(L);
	GetTop(L);
	Pop(L);
	GetTop(L);



	return 0;
}