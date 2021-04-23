#ifndef __MY_STACK__C
#define __MY_STACK__C 5456
#include<stdlib.h>
#include<my_stack.h>
#include<my_sll.h>

Stack * createStack(bool *success)
{
Stack *stack;
SinglyLinkedList *singlyLinkedList;
singlyLinkedList=createSinglyLinkedList(success);
if(*success=false) return NULL;
stack=(Stack *)malloc(sizeof(Stack));
if(stack==NULL)
{
destroySinglyLinkedList(singlyLinkedList);
if(success) *success=false;
return NULL;
} 
stack->singlyLinkedList=singlyLinkedList;
if(success) *success=true;
return stack;
}//function ends

void pushOnStack(Stack *stack,void *ptr,bool *success)
{
if(success) *success=false;
if(stack==NULL) return;
if(stack->singlyLinkedList==NULL) return;
insertIntoSinglyLinkedList(stack->singlyLinkedList,0,ptr,success);
}//function ends

void * popFromStack(Stack *stack,bool *success)
{
void *ptr;
if(success) *success=false;
if(isStackEmpty(stack)) return NULL;
ptr=removeFromSinglyLinkedList(stack->singlyLinkedList,0,success);
return ptr;
}//function ends

int getSizeOfStack(Stack *stack)
{
if(stack==NULL) return 0;
if(stack->singlyLinkedList==NULL) return 0;
return getSizeOfSinglyLinkedList(stack->singlyLinkedList);
}//function ends

void * elementAtTopOfStack(Stack *stack,bool *success)
{
void *ptr;
if(success) *success=false;
if(isStackEmpty(stack)) return NULL;
ptr=getFromSinglyLinkedList(stack->singlyLinkedList,0,success);
return ptr;
}//function ends

bool isStackEmpty(Stack *stack)
{
if(stack==NULL) return true;
if(stack->singlyLinkedList==NULL) return true;
if(getSizeOfSinglyLinkedList(stack->singlyLinkedList)==0) return true;
return false;
}//function ends

void clearStack(Stack *stack)
{
if(stack==NULL) return;
if(stack->singlyLinkedList==NULL) return;
clearSinglyLinkedList(stack->singlyLinkedList);
}//function ends

void destroyStack(Stack *stack)
{
if(stack==NULL) return;
if(stack->singlyLinkedList==NULL) return;
destroySinglyLinkedList(stack->singlyLinkedList);
free(stack);
}//function ends


#endif