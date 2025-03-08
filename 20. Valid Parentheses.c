#include <stdbool.h> 
#define MAX 10000 

struct Stack {
    char arr[MAX];
    int top;
};

void initStack(struct Stack* stack) {
    stack->top = -1;
}

bool push(struct Stack* stack, char c) {
    if (stack->top == MAX - 1) {
        return false; 
    }
    stack->arr[++stack->top] = c;
    return true;
}

char pop(struct Stack* stack) {
    if (stack->top == -1) {
        return '\0';  
    }
    return stack->arr[stack->top--];
}

bool isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

bool isValid(char* s) {
    struct Stack stack;
    initStack(&stack); 

    int i = 0;
    while (s[i] != '\0') {
        char current = s[i];

        if (current == '(' || current == '{' || current == '[') {
            push(&stack, current);
        }
        else if (current == ')' || current == '}' || current == ']') {
            if (isEmpty(&stack)) {
                return false;
            }

            char top = pop(&stack);
            if ((current == ')' && top != '(') ||
                (current == '}' && top != '{') ||
                (current == ']' && top != '[')) {
                return false;  
            }
        }

        i++;  
    }

    return isEmpty(&stack);
}
