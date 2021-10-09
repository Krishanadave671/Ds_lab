#include<stdio.h>
#include<stdlib.h>

struct stack 
{
    int size;
    int top  ;
    int *s;
};

int Empty(struct stack st){
    if(st.top == -1){
      return 1;
    }
    return 0;
}
int isfull(struct stack st){
     if(st.top == st.size-1){
       return 1;
    }
    return 0;
}
void push(struct stack *st, int x){
    if(st->top == st->size-1){
        printf("stack overflow\n");
    }
    st->top++;
    st->s[st->top] = x;
}
int pop(struct stack *st){
    int x;
    if(st->top == -1){
        printf("stack underflow\n");
    }
    x = st->s[st->top];
    st->top--;
    return x;
}
void Display(struct stack st){
    for(int i = 0 ; i <= st.top; i++){
        printf("%d ", st.s[i]);
    }
    printf("\n");
}
int peek(struct stack st){
    if(st.top == -1){
        return -1;
    }
    return st.s[st.top];
}
int isoperand(char x){
    if(x == '+' || x == '-' || x == '*' || x == '/') return 0;
    else return 1;
}
int precedence(char x){
    if(x == '+' || x == '-') return 1;
    else if(x == '*' || x == '/') return 2;
   
}
