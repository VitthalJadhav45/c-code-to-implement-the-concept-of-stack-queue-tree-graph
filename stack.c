#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr){
    if(ptr->top == -1){
        return 1;
    }else{
        return 0;
    }
}
int isFull(struct stack *ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }else{
        return 0;
    }
}

void push(struct stack *ptr,int val){
    if(isFull(ptr)){
        printf("stack overflow ,We can not performe push operation\n");
    }else{
        ptr->top=ptr->top+1;
        ptr->arr[ptr->top]=val;
    }
}

int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow, we can not performe pop operation\n");
        return -1;
    }else{
        int val=ptr->arr[ptr->top];
        ptr->top=ptr->top-1;
        return val;
    }
}

int peek(struct stack *ptr,int at){
    int pos=ptr->top-at+1;
    if(pos<0){
        printf("Not valid position for the staack \n");
        return -1;
    }else{
        return ptr->arr[pos];
    }
}
int main(){
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->size=5;
    s->top=-1;
    s->arr=(int*)malloc(s->size * sizeof(int));

    printf("Before push stack is full %d\n",isFull(s));
    printf("Before pop stack is empty %d\n",isEmpty(s));
    push(s,45);
    push(s,35);
    push(s,25);
    push(s,15);
    push(s,5);
    push(s,55);
    // printf("After push stack is full %d\n",isFull(s));
    // printf("After pop stack is empty %d\n",isEmpty(s));

    // printf("popped %d from the stack\n",pop(s));
    // printf("popped %d from the stack\n",pop(s));
    // printf("popped %d from the stack\n",pop(s));

     for(int j=1;j<s->size+1;j++){
          printf("the value at position %d is %d\n",j,peek(s,j));
     }
    return 0;
}