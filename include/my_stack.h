#ifndef __MY_STACK__H
#define __MY_STACK__H 5456
#include<my_sll.h>
#include<my_common.h>
typedef struct __$_my_stack
{
SinglyLinkedList *singlyLinkedList;
}Stack;
Stack * createStack(bool *success);
void pushOnStack(Stack *stack,void *ptr,bool *success);
void * popFromStack(Stack *stack,bool *success);
int getSizeOfStack(Stack *stack);
void * elementAtTopOfStack(Stack *stack,bool *success);
bool isStackEmpty(Stack *stack);
void clearStack(Stack *stack);
void destroyStack(Stack *stack);	
#endif	