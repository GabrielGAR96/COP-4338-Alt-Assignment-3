Variables included:
Int stack[]: array keeping track of the first stack
Int top: index of top element of the first stack

Int stack2[]: array keeping track of the second stack
Int top2: index of top element of the second stack

Functions implemented:
push(int): pushes an element on top of the first stack
push2(int): pushes an element on top of the second stack
pop(): returns and removes an element from the top of the first stack
pop2(): returns and removes an element from the top of the second stack
size(): return the sum of variables top + top2
peek(): if the first stack is not empty, return the last element of the stack. Else, if the second stack is not empty, return the first element of the second stack. Otherwise return 0;
enqueue(int): calls push(int)
dequeue(): if size() is 0, returns 0. If the second stack is empty, while top2 is greater than 0, pushes all the elements in the second stack to the first one and return pop2();

Functions push, push2, pop and pop2 are not declared in the header file, therefore they’re not accessible from the main method. Include “queue.h” and use methods enqueue to add an element to the list, dequeue to remove it, peek to check the last element of the list and size to check its size. 