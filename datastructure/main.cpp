//
//  main.cpp
//  datastructure
//
//  Created by jumail on 26/06/23.
//

#include <iostream>

struct Stack {
    int size;
    int top;
    int *s;
    
};

//prototypes:
void Push ( Stack *st, int x);
void PrintStack(Stack *st);

int Pop(Stack *st);
int StackTop(Stack*st);
int StackEmpty(Stack*st);
int StackFull(Stack*st);

// stack using array.
int main(int argc, const char * argv[]) {
    
    
    Stack st;
    
 //   std::cout << " size: " <<std::endl;
 //   std::cin >> st.size;
    st.size = 5;
    st.s = new int[st.size]; // getting stack memroy.
    st.top = -1; // if no data in stack. top should be -1;
    
    Push(&st, 12);
    Push(&st, 13);
    Push(&st, 15);
    std::cout << "top is" << st.top<<std::endl;
    PrintStack(&st);
    int poped =   Pop(&st);
    std::cout << " popled value is" << poped<<std::endl;
    std::cout << "top is " <<st.top <<std::endl;
    PrintStack(&st);
    
    
    std::cout << "stack top: " << StackTop(&st) <<std::endl;
    Pop(&st);
    Pop(&st);
    std::cout << " is stack empty" << StackEmpty(&st);
    std::cout << StackFull(&st);
    
    return 0;
}

// size: 5
//       0 1 2 3 4
//top -1 0 1 2 3 4
//pusing vauels to the stack. and increment the top value
void Push ( Stack *st, int x) {
    
    // check if the stack is full.
    // if size = 5, => top = size -1; (5-1) = 4;
    if ( st->top == st->size -1){
        std::cout << "stack over flow" <<std::endl;
        
    }else {
        st->top++; //
        st->s[st->top] = x;
    }
}

// print stack memory;
void PrintStack(Stack *st) {
    int size= st->size;
    for(int i = 0; i < size; i++) {
        if(st->top == size) {
            break;
        }
        std::cout << st->s[i] << std::endl;
    }
}

// pop stack
int Pop(Stack *st) {
    int x  = -1;
    if(st->top == -1) {
        std::cout << " stack under flow" <<std::endl;
    }else {
        x = st->s[st->top];
        st->top --;
    }
    return x;
}

int StackTop(Stack *st) {
    if ( st->top == -1) {
        return -1;
    }else {
        return st->s[st->top];
    }
}

int StackEmpty(Stack*st) {
    if ( st->top == -1) {
        std::cout <<" stack is empty" <<std::endl;
        return 0;
    }else {
        std::cout << " stack is not empty" <<std::endl;
        return 1;
    }
}

int StackFull(Stack *st) {
    if( st->top == st->size-1) { // if top is size-1 is true it's full;
        std::cout << " stack is full " <<std::endl;
        return -1;
    }else {
        std::cout << "stack is not full" <<std::endl;
        return 0;
    }
}

int StackPeek(Stack*st, int index) {
    
    int x = -1;
    return 0; // not complete.
    
}
