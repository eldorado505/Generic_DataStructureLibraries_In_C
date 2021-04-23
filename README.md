# DOCUMENTATION

## Overview
here you get to know about `library` of GENERIC data structures and which is built in `c` programing language.

## Why The Generic Data Structure In C ?
we have `STL in C++`, `Collection classes in Java` but when we talk about `C` so there is no such facilities to handle some huge data efficiently. 



* [Generic Singly Linked List](#generic-singly-linked-list)  
   * [Singly Linked List Iterator](#description-of-iterator-functions-of-singly-linked-list)
   * [Use of Singly Linked List](#use-of-singly-linked-list-)
* [Generic Doubly Linked List](#generic-doubly-linked-list)  
   * [Doubly Linked List Iterator](#description-of-iterator-functions-of-doubly-linked-list-)
   * [Use of Doubly Linked List](#use-of-doubly-linked-list-)
* [Generic Stack](#generic-stack)
   * [Use of Stack](#use-of-stack-)
* [Generic Queue](#generic-queue)
   * [Use of Queue](#use-of-queue-)
* [Generic AVL Tree](#generic-avl-tree)  
   * [AVL Tree Iterator](#description-of-iterator-functions-of-avl-tree)
   * [Use of AVL Tree](#use-of-avl-tree-)

## Generic Singly Linked List  
***
### Description of Main functions :

* To `create` SinglyLinkedList
   ```c
   SinglyLinkedList * createSinglyLinkedList(bool *success); 
   ```
   `bool success;`  
    `SinglyLinkedList *list;`  
    `list=createSinglyLinkedList(&success);`  
    if(`success==true`) list is created.  
    if(`success==false`) list is not created.  

* To `add` element in Singly Linked List
  ```c
  void addToSinglyLinkedList(SinglyLinkedList *singlyLinkedList,void *ptr,bool *success);
  ```
  `bool success;`  
  `int i=100;`  
  `addToSinglyLinkedList(list,(void *)&i,&success);`  
   if(`success==true`) element is added.  
   if(`success==false`) element is not added.  
    
* To `insert` element in Singly Linked List
   ```c
   void insertIntoSinglyLinkedList(SinglyLinkedList *singlyLinkedList,int index,void *ptr,bool *success);
   ```
  `bool success;`  
  `int i=100;`  
  `int index;` (position to insert element in list)  
  `insertIntoSinglyLinkedList(list,index,(void *)&i,&success);`  
   if(`success==true`) element is inserted.  
   if(`success==false`) element is not   inserted.  
   
* To `remove` element from Singly Linked List
  ```c
  void * removeFromSinglyLinkedList(SinglyLinkedList *singlyLinkedList,int index,bool *success);
  ```
  function will return removed element's address.  
  `bool success;`  
  `void * ptr;`  
  `int index;` (position to remove element in list)  
  `ptr=removeFromSinglyLinkedList(list,index,&success);`  
  if(`success==true`) element is removed.  
  if(`success==false`) element is not removed.  

* To `get size` of Singly Linked List
  ```c
  int getSizeOfSinglyLinkedList(SinglyLinkedList *singlyLinkedList);
  ```
  `int size;`  
  `size=getSizeOfSinglyLinkedList(list);`  
* To `get an element` from Singly Linked List  
  ```c
  void * getFromSinglyLinkedList(SinglyLinkedList *singlyLinkedList,int index,bool *success);
  ```
  `bool success;`  
  `void * ptr;`  
  `int index;`  
  `ptr=getFromSinglyLinkedList(list,index,&success);`  
  if(`success==true`) element is received in ptr.  
  if(`success==false`) element is not received int ptr.  

* To `merge one list into another list` of Singly Linked List  
  ```c
  void appendToSinglyLinkedList(SinglyLinkedList *targetSinglyLinkedList,SinglyLinkedList * sourceSinglyLinkedList,bool *success);
  ```
  we have `list_1` and `list_2` of SinglyLinkedList.  
  for merging `list_1` into `list_2`.  
  `bool success;`   
  `appendToSinglyLinkedList(list_1,list_2,&success);`  
  if(`success==true`) lists are merged.  
  if(`success==false`) lists are not merged.  

* To `clear` the Singly Linked List  
  ```c
  void clearSinglyLinkedList(SinglyLinkedList *singlyLinkedList);
  ```
  use to free (remove) nodes of list (size of list is zero).  
  `clearSinglyLinkedList(list);`  
* To `delete/destroy` the Singly Linked List    
  ```c
  void destroySinglyLinkedList(SinglyLinkedList *singlyLinkedList);
  ```
  use to delete the list.  
  `destroySinglyLinkedList(list);`  
  ***  
### Description of Iterator functions of Singly Linked List:  

* To `create iterator` of Singly Linked List
  ```c
  SinglyLinkedListIterator getSinglyLinkedListIterator(SinglyLinkedList *singlyLinkedList,bool *success);
  ```
  `SinglyLinkedListIterator it;`      
  `bool success;`  
  `it=getSinglyLinkedListIterator(list,&success);`  
  if(`success=true`) iterator (it) is created.  
  if(`success==false`) iterator (it) is not created.  
  
* To `check iterator's position` in Singly Linked List
  ```c
  bool hasNextInSinglyLinkedList(SinglyLinkedListIterator *singlyLinkedListIterator);   
  ```
  `bool check;`  
  `check=hasNextInSinglyLinkedList(&it);`  
  if(`check==true`) next element is exist in the list.  
  if(`check==false`) iterator is at end of the list.  

* To `check iterator's position` in Singly Linked List  
  ```c
  void * getNextElementFromSinglyLinkedList(SinglyLinkedListIterator *singlyLinkedListIterator,bool *success);  
  ```
  In this function iterator will return the current pointing element (address) and traverse one step forward.  
  `void * ptr;`  
  `bool success;`  
  `ptr=getNextElementFromSinglyLinkedList(&it,&success);`  
  if(`success=true`) element is received in ptr.  
  if(`success=false`)  element is not received in ptr.  
  
  ***
### Use Of Singly Linked List :
  ```c
  #include<my_sll.h>
  #include<stdio.h>
  int main()
  {
  int i1,i2,i3;
  int y,*x;
  bool succ;
  SinglyLinkedList *list1;
  list1=createSinglyLinkedList(&succ);
  if(succ==false)
  {
  printf("Unable to create list");
  return 0;
  }
  printf("List Created\n");
  i1=100;
  i2=200;
  i3=300;

  //adding data
  addToSinglyLinkedList(list1,(void *)&i1,&succ);
  if(succ) printf("%d added to list1\n",i1);
  else printf("Unable to add %d to list1\n",i1);
  //adding data
  addToSinglyLinkedList(list1,(void *)&i2,&succ);
  if(succ) printf("%d added to list1\n",i2);
  else printf("Unable to add %d to list1\n",i2);
  //inserting data
  insertIntoSinglyLinkedList(list1,1,(void *)&i3,&succ);
  if(succ) printf("%d inserted to list1\n",i3);
  else printf("Unable to insert %d to list1\n",i3);
  //size of list
  printf("Size of list1 is %d\n",getSizeOfSinglyLinkedList(list1));

  //use of iterator
  SinglyLinkedListIterator it;
  it=getSinglyLinkedListIterator(list1,&succ);
  if(succ)
  {
  while(hasNextInSinglyLinkedList(&it))
  {
  x=(int *)getNextElementFromSinglyLinkedList(&it,&succ);
  printf("%d\n",*x);
  }
  }
 
  //removing data of 0 index
  x=removeFromSinglyLinkedList(list1,0,&succ);
  if(succ) printf("%d removed list1\n",*x);
  else printf("Unable to remove");
 
  //clearing list
  clearSinglyLinkedList(list1);

  //destroying list
  destroySinglyLinkedList(list1);
  return 0;
  }
  ```

## Generic Doubly Linked List
***
### Description of Main functions :

* To `create` DoublyLinkedList
   ```c
   DoublyLinkedList * createDoublyLinkedList(bool *success); 
   ```
   `bool success;`  
    `DoublyLinkedList *list;`  
    `list=createDoublyLinkedList(&success);`   
    if(`success==true`) list created.    
    if(`success==false`) list is not created.  

* To `add` element in Doubly Linked List
  ```c
  void addToDoublyLinkedList(DoublyLinkedList *doublyLinkedList,void *ptr,bool *success);
  ```
  `bool success;`  
  `int i=100;`  
  `addToDoublyLinkedList(list,(void *)&i,&success);`  
   if(`success==true`) element is added.  
   if(`success==false`) element is not added.  
    
* To `insert` element in Doubly Linked List
   ```c
   void insertIntoDoublyLinkedList(DoublyLinkedList *doublyLinkedList,int index,void *ptr,bool *success);  
   ```
  `bool success;`  
  `int i=100;`  
  `int index;` (position to insert element in list)  
  `insertIntoDoublyLinkedList(list,index,(void *)&i,&success);`  
   if(`success==true`) element is inserted.  
   if(`success==false`) element is not inserted.  
   
* To `remove` element from Doubly Linked List  
  ```c
  void * removeFromDoublyLinkedList(DoublyLinkedList *doublyLinkedList,int index,bool *success);  
  ```
  function will return removed element's address.  
  `bool success;`  
  `void * ptr;`  
  `int index;` (position to remove element in list)  
  `ptr=removeFromDoublyLinkedList(list,index,&success);`  
  if(`success==true`) element is removed.  
  if(`success==false`) element is not removed.  

* To `get size` of Doubly Linked List
  ```c
  int getSizeOfDoublyLinkedList(DoublyLinkedList *doublyLinkedList);  
  ```
  `int size;`  
  `size=getSizeOfDoublyLinkedList(list);`  

* To `get an element` from Doubly Linked List    
  ```c
  void * getFromDoublyLinkedList(DoublyLinkedList *doublyLinkedList,int index,bool *success);
  ```
  `bool success;`  
  `void * ptr;`  
  `int index;`  
  `ptr=getFromDoublyLinkedList(list,index,&success);`  
  if(`success==true`) element is received in ptr.  
  if(`success==false`) element is not received int ptr.  

* To `merge one list into another list` of Doubly Linked List  
  ```c
  void appendToDoublyLinkedList(DoublyLinkedList *targetDoublyLinkedList,DoublyLinkedList * sourceDoublyLinkedList,bool *success);
  ```
  we have `list_1` and `list_2` of DoublyLinkedList.    
  for merging `list_1` into `list_2`.  
  `bool success;`  
  `appendToDoublyLinkedList(list_1,list_2,&success);`  
  if(`success=true`) lists are merged.  
  if(`success==false`) lists are not merged.  

* To `clear` the Doubly Linked List  
  ```c
  void clearDoublyLinkedList(DoublyLinkedList *doublyLinkedList);
  ```
  use to free (remove) nodes of list (size of list is zero).  
  `clearDoublyLinkedList(list);`

* To `delete/destroy` the Doubly Linked List    
  ```c
  void destroyDoublyLinkedList(DoublyLinkedList *doublyLinkedList);
  ```
  use to delete the list.  
  `destroyDoublyLinkedList(list);`  
  ***
### Description of Iterator functions of Doubly Linked List :  
* To `create iterator` of Doubly Linked List
  ```c
  DoublyLinkedListIterator getDoublyLinkedListIterator(DoublyLinkedList *doublyLinkedList,bool *success);  
  ```
  `DoublyLinkedListIterator it;`  
  `bool success;`  
  `it=getDoublyLinkedListIterator(list,&success);`  
  if(`success==true`) iterator (it) is created.  
  if(`success==false`) iterator (it) is not created.  
  
* To `check iterator's position` in Doubly Linked List
  ```c
  bool hasNextInDoublyLinkedList(DoublyLinkedListIterator *doublyLinkedListIterator); 
  ```
  `bool check;`  
  `check=hasNextInDoublyLinkedList(&it);`  
  if(`check==true`) next element is exist in the list.  
  if(`check==false`) iterator is at end of the list.  

* To `check iterator's position` in Doubly Linked List
  ```c
  void * getNextElementFromDoublyLinkedList(DoublyLinkedListIterator *doublyLinkedListIterator,bool *success);
  ```
  In this function iterator will return the current pointing element (address) and traverse one step forward.  
  `void * ptr;`  
  `bool success;`  
  `ptr=getNextElementFromDoublyLinkedList(&it,&success);`  
  if(`success==true`) element is received in ptr.  
  if(`success==false`)  element is not received in ptr.  

* To `create reverse iterator` of Doubly Linked List
  ```c
  DoublyLinkedListReverseIterator getDoublyLinkedListReverseIterator(DoublyLinkedList *doublyLinkedList,bool *success);
  ```
  `DoublyLinkedListReverseIterator it;`  
  `bool success;`  
  `it=getDoublyLinkedListReverseIterator(list,&success);`  
  if(`success==true`) reverse iterator (it) is created.  
  if(`success==false`) reverse iterator (it) is not created.  
  
* To `check reverse iterator's position` in Doubly Linked List
  ```c
  bool hasPreviousInDoublyLinkedList(DoublyLinkedListReverseIterator *doublyLinkedListReverseIterator); 
  ```
  `bool check;`  
  `check=hasPreviousInDoublyLinkedList(&it);`  
  if(`check==true`) previous element is exist in the list.  
  if(`check==false`) iterator is at start of the list.  

* To `check reverse iterator's position` in Doubly Linked List
  ```c
  void * getPreviousElementFromDoublyLinkedList(DoublyLinkedListReverseIterator *doublyLinkedListReverseIterator,bool *success);
  ```
  In this function iterator will return the current pointing element (data of node) and traverse one step backward.  
  `void * ptr;`  
  `bool success;`  
  `ptr=getPreviousElementFromDoublyLinkedList(&it,&success);`  
  if(`success==true`) element is received in ptr.  
  if(`success==false`)  element is not received in ptr.  
  ***
### Use Of Doubly Linked List :
  ```c
  #include<my_dll.h>
  #include<stdio.h>
  int main()
  {
  int i1,i2,i3;
  int y,*x;
  bool succ;
  DoublyLinkedList *list1;
  list1=createDoublyLinkedList(&succ);
  if(succ==false)
  {
  printf("Unable to create list");
  return 0;
  }
  printf("List Created\n");
  i1=100;
  i2=200;
  i3=300;

  //adding data
  addToDoublyLinkedList(list1,(void *)&i1,&succ);
  if(succ) printf("%d added to list1\n",i1);
  else printf("Unable to add %d to list1\n",i1);
  //adding data
  addToDoublyLinkedList(list1,(void *)&i2,&succ);
  if(succ) printf("%d added to list1\n",i2);
  else printf("Unable to add %d to list1\n",i2);
  //inserting data
  insertIntoDoublyLinkedList(list1,1,(void *)&i3,&succ);
  if(succ) printf("%d inserted to list1\n",i3);
  else printf("Unable to insert %d to list1\n",i3);
  //size of list
  printf("Size of list1 is %d\n",getSizeOfDoublyLinkedList(list1));

  //use of iterator
  //(similarly we can use reverse iterator in it for reverse iteration.)
  DoublyLinkedListIterator it;
  it=getDoublyLinkedListIterator(list1,&succ);
  if(succ)
  {
  while(hasNextInDoublyLinkedList(&it))
  {
  x=(int *)getNextElementFromDoublyLinkedList(&it,&succ);
  printf("%d\n",*x);
  }
  }
 
  //removing data of 0 index
  x=removeFromDoublyLinkedList(list1,0,&succ);
  if(succ) printf("%d removed list1\n",*x);
  else printf("Unable to remove");
 
  //clearing list
  clearDoublyLinkedList(list1);

  //destroying list
  destroyDoublyLinkedList(list1);
  return 0;
  }
  ```

## Generic Stack
___
### Description of Main functions :
* To `create` Stack
  ```c
  Stack * createStack(bool *success);
  ```
  `bool success;`  
  `Stack *stack;`  
  `list=createStack(&success);`  
  if(`success==true`) stack is created.  
  if(`success==false`) stack is not created.  

* To `push` in Stack
  ```c
  void pushOnStack(Stack *stack,void *ptr,bool *success);
  ```
  `bool success;`  
  `int i=100;`  
  `pushOnStack(stack,(void *)&i,&success);`  
  if(`success==true`) element is pushed.  
  if(`success==false`) element is not pushed.

* To `pop` from Stack
  ```c
  void * popFromStack(Stack *stack,bool *success);
  ```
  `bool success;`  
  `void *ptr;`  
  `popFromStack(stack,&success);`  
  if(`success==true`) element is poped.  
  if(`success==false`) element is not poped.  

* To `get size` of Stack  
  ```c
  int getSizeOfStack(Stack *stack);  
  ```
  `int size;`  
  `size=getSizeOfStack(stack);`  

* To `top element` of Stack  
  ```c
  void * elementAtTopOfStack(Stack *stack,bool *success);
  ```
  `bool success;`  
  `void *ptr;`
  `ptr=elementAtTopOfStack(stack,&success);`(ptr is pointing top most element of stack.)  
  if(`success==true`) we got top element.  
  if(`success==true`) we didn't got top element.  
* To `check` is Stack `empty`
  ```c
  bool isStackEmpty(Stack *stack);
  ```
  `bool check;`  
  `isStackEmpty(stack);`  
  if(`check==true`) stack is empty.  
  if(`check==false`) stack is not empty.  

* To `clear` the Stack
  ```c
  void clearStack(Stack *stack);
  ```
  use to make stack empty (size of stack is zero).  
  `clearStack(stack);`

* To `delete/destroy` the Stack
  ```c
  void destroyStack(Stack *stack);	
  ```
  use to delete the stack.  
  `destroyStack(stack);`  
  ___
### Use Of Stack :
  ```c
  #include<my_stack.h>
  #include<stdio.h>
  int main()
  {
  int succ;
  int x1,x2,x3,x4,x5;
  int *x;
  x1=100;
  x2=200;
  x3=300;
  x4=400;
  x5=500;
  Stack *stack;
  stack=createStack(&succ);
  if(stack==false)
  {
  printf("Unable to create stack\n");
  return 0;
  }
  // push data on stack
  pushOnStack(stack,(void *)&x1,&succ);
  if(succ) printf("element pushed\n");
  pushOnStack(stack,(void *)&x2,&succ);
  if(succ) printf("element pushed\n");
  pushOnStack(stack,(void *)&x3,&succ);
  if(succ) printf("element pushed\n");
  pushOnStack(stack,(void *)&x4,&succ);
  if(succ) printf("element pushed\n");
  pushOnStack(stack,(void *)&x5,&succ);
  if(succ) printf("element pushed\n");

  // size of stack
  printf("Size of stack : %d\n",getSizeOfStack(stack));

  //checking is stack empty
  if(isStackEmpty(stack)) printf("Stack is empty\n");
  else printf("Stack is not empty\n");

  //checking top element of stack
  x=(int *)elementAtTopOfStack(stack,&succ); 
  printf("Element at top of stack is %d\n",*x);  

  //poping data from stack
  while(!isStackEmpty(stack))
  {
  x=(int *)popFromStack(stack,&succ);
  printf("%d popped from stack\n",*x);
  }
  
  //destorying stack
  destroyStack(stack);
  return 0;
  }
  ```
  ## Generic Queue
___
### Description of Main functions :
* To `create` Queue
  ```c
  Queue * createQueue(bool *success);
  ```
  `bool success;`  
  `Queue *queue;`  
  `list=createQueue(&success);`  
  if(`success==true`) queue created.  
  if(`success==false`) queue is not created.  

* To `add` in Queue
  ```c
  void addToQueue(Queue *queue,void *ptr,bool *success);
  ```
  `bool success;`  
  `int i=100;`  
  `addToQueue(queue,(void *)&i,&success);`  
  if(`success==true`) element is added.  
  if(`success==false`) element is not added.

* To `remove` from Queue
  ```c
  void * removeFromQueue(Queue *queue,bool *success);
  ```
  `bool success;`  
  `void *ptr;`  
  `removeFromQueue(queue,&success);`  
  if(`success==true`) element is removed.  
  if(`success==false`) element is not removed.  

* To `get size` of Queue  
  ```c
  int getSizeOfQueue(Queue *queue);  
  ```
  `int size;`  
  `size=getSizeOfQueue(queue);`  

* To `top element` of Queue  
  ```c
  void * elementAtTopOfQueue(Queue *queue,bool *success);
  ```
  `bool success;`  
  `void *ptr;`
  `ptr=elementAtTopOfQueue(queue,&success);`(ptr is pointing top most element of queue.)  
  if(`success==true`) we got top element.  
  if(`success==true`) we didn't got top element.  
* To `check` is Queue `empty`
  ```c
  bool isQueueEmpty(Queue *queue);
  ```
  `bool check;`  
  `isQueueEmpty(queue);`  
  if(`check==true`) queue is empty.  
  if(`check==false`) queue is not empty.  

* To `clear` the Queue
  ```c
  void clearQueue(Queue *queue);
  ```
  use to make queue empty (size of queue is zero).  
  `clearQueue(queue);`

* To `delete/destroy` the Queue
  ```c
  void destroyQueue(Queue *queue);	
  ```
  use to delete the queue.  
  `destroyQueue(queue);`  
  ___
### Use Of Queue :
  ```c
  #include<my_queue.h>
  #include<stdio.h>
  int main()
  {
  int succ;
  int x1,x2,x3,x4,x5;
  int *x;
  x1=100;
  x2=200;
  x3=300;
  x4=400;
  x5=500;
  Queue *queue;
  queue=createQueue(&succ);
  if(queue==false)
  {
  printf("Unable to create queue\n");
  return 0;
  }
  
  //adding to queue
  addToQueue(queue,(void *)&x1,&succ);
  if(succ) printf("element added\n"); 
  addToQueue(queue,(void *)&x2,&succ);
  if(succ) printf("element added\n");
  addToQueue(queue,(void *)&x3,&succ);
  if(succ) printf("element added\n");
  addToQueue(queue,(void *)&x4,&succ);
  if(succ) printf("element added\n");
  addToQueue(queue,(void *)&x5,&succ);
  if(succ) printf("element added\n");
  
  printf("Size of queue : %d\n",getSizeOfQueue(queue));
  
  //checking is queue empty
  if(isQueueEmpty(queue)) printf("Queue is empty\n");
  else printf("Queue is not empty\n");
  
  //checking top element of queue  
  x=(int *)elementAtTopOfQueue(queue,&succ); 
  printf("Element at top of queue is %d\n",*x);
   
  //removing from queue
  while(!isQueueEmpty(queue)) 
  {
  x=(int *)removeFromQueue(queue,&succ);
  printf("%d removed from queue\n",*x);
  }
  //destoring queue 
  destroyQueue(queue);
  return 0;
  }
  ```  
  ## Generic AVL Tree
___
### Description of Main functions :
* To `create` AVL Tree  
  ```c
  AVLTree * createAVLTree(bool *success,int (*predicate)(void *,void *));
  ```
  here the predicate funtion is required to create AVLTree (comparator funtion).  
  `bool success;`  
  `AVLTree *tree;`  
  `tree=createAVLTree(&success,predicate);`  
  if(`success==true`) tree is created.  
  if(`success==false`) tree is not created.  
* To `add/insert` in AVL Tree
  ```c
  void addToAVLTree(AVLTree *avlTree,void *ptr,bool *success);  

  void insertIntoAVLTree(AVLTree *avlTree,void *ptr,bool *success);
  ```
  both the funtions are use for adding and inserting new data in AVL Tree.  
  `bool success;`  
  `int i=100;`  
  `addToAVLTree(tree,(void *)&i,&success);`  
   if(`success==true`) element is added.  
   if(`success==false`) element is not added.  
   similary we can use insertIntoAVLTree function.  
* To `get size` of AVL Tree
  ```c
  int getSizeOfAVLTree(AVLTree *avlTree);
  ```
  `int size;`  
  `size=getSizeOfAVLTree(tree);`  
* To `remove` element from AVL Tree
  ```c
  void * removeFromAVLTree(AVLTree *avlTree,void *ptr,bool *success);
  ```
  `bool success;`  
  `int i=100;` (element to remove from tree)  
  `void *ptr;`  
  `ptr=removeFromAVLTree(avlTree,(void *)i,&success);` (ptr will store the address of removed element, which is i)  
  if(`success==true`) element is removed.  
  if(`success==false`) element is not removed.  

* To `get an element` from AVL Tree  
  ```c
  void * getFromAVLTree(AVLTree *avlTree,void *ptr,bool *success);
  ```
  `bool success;`  
  `int i=100;` (element to get from tree)  
  `void *ptr;`  
  `ptr=removeFromAVLTree(avlTree,(void *)i,&success);` (ptr will store the address of element to get, which is i)  
  if(`success==true`) element is received in ptr.  
  if(`success==false`) element is not received int ptr.  
* To `get height` of AVL Tree
  ```c
  int getHeightOfAVLTree(AVLTreeNode *root);
  ```
  `int height;`  
  `getHeightOfAVLTree(avlTree);`  
* To `clear` the AVL Tree  
  ```c
  void clearAVLTree(AVLTree *avlTree);
  ```
  use to free (remove) all nodes of tree (size of tree is zero).  
  `clearAVLTree(tree);`  
* To `delete/destroy` the AVL Tree  
  ```c
  void destroyAVLTree(AVLTree *avlTree);
  ```
  use to delete the tree.  
  `destroyAVLTree(tree);`  
  ***  
### Description of Iterator functions of AVL Tree:  

* To `create iterator` of AVLTree
  ```c
  AVLTreeInOrderIterator getAVLTreeInOrderIterator(AVLTree *avlTree,bool *success);  

  AVLTreePreOrderIterator getAVLTreePreOrderIterator(AVLTree *avlTree,bool *success);  

  AVLTreePostOrderIterator getAVLTreePostOrderIterator(AVLTree *avlTree,bool *success);  
  ```
  `AVLTreeInOrderIterator it;`  
  `bool success;`  
  `it=getAVLTreeInOrderIterator(tree,&success);`  
  if(`success=true`) iterator (it) is created.  
  if(`success==false`) iterator (it) is not created.  
  similary we can create iterator for pre order and post order traversal.
  
* To `check iterator's position` in AVL Tree  
  ```c
  bool hasNextInOrderElementInAVLTree(AVLTreeInOrderIterator *avlTreeInOrderIterator);  
  
  bool hasNextPreOrderElementInAVLTree(AVLTreePreOrderIterator *avlTreePreOrderIterator);  

  bool hasNextPostOrderElementInAVLTree(AVLTreePostOrderIterator *avlTreePostOrderIterator);  
  ```
  `bool check;`  
  `check=hasNextInOrderElementInAVLTree(&it);`  
  if(`check==true`) next element is exist in the tree traversal.  
  if(`check==false`) iterator is at end of the tree traversal.  
  similary we can use pre order and post order function.  

* To `check iterator's position` in AVL Tree  
  ```c
  void * getNextInOrderElementFromAVLTree(AVLTreeInOrderIterator *avlTreeInOrderIterator,bool *success);  

  void * getNextPreOrderElementFromAVLTree(AVLTreePreOrderIterator *avlTreePreOrderIterator,bool *success);  

  void * getNextPostOrderElementFromAVLTree(AVLTreePostOrderIterator *avlTreePostOrderIterator,bool *success);  
  ```
  In this function iterator will return the current pointing element (data of node) and traverse one step forward.  
  `void * ptr;`  
  `bool success;`  
  `ptr=getNextInOrderElementFromAVLTree(&it,&success);`  
  if(`success=true`) element is received in ptr.  
  if(`success=false`)  element is not received in ptr.  
  similary we can use pre order and post order function.  
  ***
### Use Of AVL Tree :
```c
#include<my_avl_tree.h>
#include<stdio.h>
#include<stdlib.h>
int myComparator(void *left,void *right)
{
int *leftInt,*rightInt;
leftInt=(int *)left;
rightInt=(int *)right;
return (*leftInt)-(*rightInt);
}

int main()
{
char more;
int *x;
int num,ch;
AVLTree *tree;
AVLTreeInOrderIterator inOrderIterator;
AVLTreePreOrderIterator preOrderIterator;
AVLTreePostOrderIterator postOrderIterator;

bool succ;
tree=createAVLTree(&succ,myComparator);
if(succ==false)
{
printf("Unable to create tree, low on memory\n");
return 0;
}
while(1)
{
printf("1. Insert \n");
printf("2. In order traversal\n");
printf("3. Pre order traversal\n");
printf("4. Post order Traversal\n");
printf("5. Remove \n");
printf("6. Search \n");
printf("7. Exit\n");
printf("Enter your choice : ");
scanf("%d",&ch);
if(ch==1)
{
printf("Enter number to be insert in tree  : ");
scanf("%d",&num);
fflush(stdin);
x=(int *)malloc(sizeof(int));
*x=num;
insertIntoAVLTree(tree,x,&succ);
if(succ) printf("address of item that contain %d inserted in tree\n",*x);
else printf("Unable to insert in tree\n"); 
}
if(ch==2)
{
printf("In Order Iteration start \n");
inOrderIterator=getAVLTreeInOrderIterator(tree,&succ);
if(succ)
{
while(hasNextInOrderElementInAVLTree(&inOrderIterator))
{
x=(int *)getNextInOrderElementFromAVLTree(&inOrderIterator,&succ);
printf("%d\n",*x);
}
}
}
if(ch==3)
{
printf("Pre Order Iteration start \n");
preOrderIterator=getAVLTreePreOrderIterator(tree,&succ);
if(succ)
{
while(hasNextPreOrderElementInAVLTree(&preOrderIterator))
{
x=(int *)getNextPreOrderElementFromAVLTree(&preOrderIterator,&succ);
printf("%d\n",*x);
}
}
}
if(ch==4)
{
printf("Post Order Iteration start \n");
postOrderIterator=getAVLTreePostOrderIterator(tree,&succ);
if(succ)
{
while(hasNextPostOrderElementInAVLTree(&postOrderIterator))
{
x=(int *)getNextPostOrderElementFromAVLTree(&postOrderIterator,&succ);
printf("%d\n",*x);
}
}
}
if(ch==5)
{
printf("Enter number to remove : ");
scanf("%d",&num);
fflush(stdin);
x=removeFromAVLTree(tree,&num,&succ);
if(succ) printf("%d is removed\n",*x);
else printf("%d is not found\n",num);
}
if(ch==6)
{
printf("Enter number to search : ");
scanf("%d",&num);
fflush(stdin);
x=getFromAVLTree(tree,&num,&succ);
if(succ) printf("%d is found\n",*x);
else printf("%d is not found\n",num);
}
if(ch==7) break;
}//main loop ends
destroyAVLTree(tree); 
return 0;
}
```