# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>

typedef struct Linknode {
	int data;
	struct Linknode* next;
}Stack,*LisStack;

//声明一个栈
LisStack testStack(){
	LisStack L = (LisStack)malloc(sizeof(Stack));
	return L;
}
//初始化栈
void InitStack(LisStack L) {
	L->next = NULL;
}

//判断栈空
void StackEmpty(LisStack L) {
	if (L->next == NULL) {
		printf("该栈为空！\n\n");
	}
	else {
		printf("该栈不为空！\n\n");
	}
}

//进栈
bool Push(LisStack L, int x) {
	LisStack S = (LisStack)malloc(sizeof(Stack));
	if (S == NULL) {
		printf("内存不足，分配空间失败！\n\n");
		return false;
	}
	S->data = x;
	S->next = L->next;
	L->next = S;

	return true;
}

//出栈
void Pop(LisStack L) {
	if (L->next != NULL) {
		printf("出栈的元素是%d\n\n", L->next->data);
		LisStack S = L->next;
		L->next = L->next->next;
		free(S);
	}
	else
		printf("该栈已空!!!\n\n");
	return true;
}

//读栈顶
void GetTop(LisStack L) {
	if (L->next != NULL) {
		printf("栈顶的元素是%d\n\n", L->next->data);
	}
	else
		printf("该栈已空!!!\n\n");
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
