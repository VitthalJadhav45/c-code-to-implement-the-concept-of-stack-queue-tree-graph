#include <iostream>
using namespace std;

class queue
{
public:
    int size;
    int r;
    int f;
    int *arr;
};

int isEmpty(queue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    return 0;
}

int isFull(queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}

void enQueue(queue *q, int val)
{
    if (isFull(q))
    {
        cout << "This queue is full " << endl;
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
        cout << "enQueued element " << val << endl;
    }
    return;
}

int deQueue(queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        cout << "This queue is empty" << endl;
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

void queueDisplay(queue* q){
    if(q->f == q->r){
        cout<<"Empty"<<endl;
    }

    for(int i=q->f+1;i<q->r+1;i++){
        cout<<q->arr[i]<<" ";
    }
}
int main()
{
    queue q;
    q.size = 4;
    q.f = q.r = -1;
    q.arr = new int[q.size];

    //    if(isEmpty(&q)){
    //        cout<<"This queue is empty"<<endl;
    //    }
    //    if(isFull(&q)){
    //        cout<<"This queue is Full "<<endl;
    //    }

    enQueue(&q, 45);
    enQueue(&q, 23);
    enQueue(&q, 90);
    enQueue(&q, 43);
    
    queueDisplay(&q);
    
    // cout << "Dequeuing Element " << deQueue(&q) << endl;
    // cout << "dequeuing element " << deQueue(&q) << endl;
    // cout << "dequeuing element " << deQueue(&q) << endl;
    // cout << "dequeuing element " << deQueue(&q) << endl;

    // if (isEmpty(&q))
    // {
    //     cout << "This queue is empty" << endl;
    // }
    // else
    // {
    //     cout << "Not empty" << endl;
    // }
    // if (isFull(&q))
    // {
    //     cout << "This queue is Full " << endl;
    // }

    enQueue(&q, 45);

    
    return 0;
}