#include <iostream>
#include <new>
using namespace std;

typedef struct priorityqueue {
    int n;
    int priority;
    struct priorityqueue *next;
} PriorityQueue;

void displayList(PriorityQueue*);
PriorityQueue* dequeueList(PriorityQueue*);
PriorityQueue* enqueueList(PriorityQueue*,int,int);
int front(PriorityQueue*);


int main() {
    PriorityQueue *queue = NULL;
    int trigger=1,c,num,prio;
    do {
        cout << "   PRIORITY QUEUE\n";
        cout << "--------------------------\n";
        cout << "\t1.Display\n\t2.Enqueue\n\t3.Dequeue\n\t4.Front\n\t0.Exit\n";
        cout << "\t\t >> Choice :: ";
        cin >> c;
        cout << "\n\n";

        switch(c) {
            case 1:
                cout <<"\t    PRIORITY QUEUE\n \t\t";
                displayList(queue);
                break;
            case 2:
                cout << "\t >> Enter a Number to Enqueue:: ";
                cin >> num;
                cout << "\t >> Enter It's Priority: ";
                cin >> prio;
                queue = enqueueList(queue,num,prio);
                break;
            case 3:
                queue = dequeueList(queue);
                break;
            case 4:
                cout << "\t >> Element in the Front is :: " << front(queue) << endl;
                break;
            case 0:
                cout << "Bye!! \n";
                trigger = 0;
                break;
            default:
                cout << "\t\t >> INVALID ENTRY!!! TRY AGAIN...  \n";

        }

        cout << "\n";
    }while(trigger);


    return 0;
}

void displayList(PriorityQueue* front) {
    if(front == NULL) {
        cout << "\t\t  :: THE QUEUE IS EMPTY :: ";
        return;
    }

    cout << "\t\t FRONT -->  ";
    do {
        cout << front->n << "(" << front->priority  << ")" << " :: ";
        front = front->next;
    }while(front != NULL);

    cout << "  <-- END \n";

}
PriorityQueue* dequeueList(PriorityQueue* front) {
    if(front == NULL) {
        cout << "\t\t\t >> ERROR: LIST IS EMPTY << \n ";
        return NULL;
    }

    if(front->next == NULL) {
        cout << "\t\t >> ELEMENT POPED:: " << front->n << endl;
        cout << "\t\t >> IT'S PRIORITY:: " << front->priority << endl;
        delete front;
        return NULL;
    }
    PriorityQueue *head = front->next;
    cout << "\t\t >> ELEMENT POPED:: " << front->n << endl;
    cout << "\t\t >> IT'S PRIORITY:: " << front->priority << endl;
    delete front;

    return head;
}

PriorityQueue* enqueueList(PriorityQueue* front,int num,int p) {
    PriorityQueue *node = new PriorityQueue;
    node->n = num;
    node->priority = p;
    node->next = NULL;
    if(front == NULL) {
        return node;
    }
    if(front->priority < p) {
        node->next  = front;
        return node;
    }
    PriorityQueue *head = front;
    while(front->next != NULL && front->next->priority > p) {
        front = front->next;
    }

    if(front->next == NULL)front->next = node;
    else {
        node->next = front->next;
        front->next = node;
    }
    return head;
}

int front(PriorityQueue* front) {
    if(front == NULL) {
        return -1;
    }
    return front->n;
}
