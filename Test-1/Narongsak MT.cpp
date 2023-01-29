//Narongsak Khongkhlod 655432061229-0 Sec3
//URL https://www.youtube.com/watch?v=bdrPWIpj3Dw

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int info;
    struct Node *next; 
};

void ShowAll( struct Node *walk ){
    while (walk != NULL){
        printf("%d ", walk->info); 
        walk = walk->next; 
    } 
    printf("\n");
} 

struct Node *AddNode(struct Node **walk, int info){
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->info = info;
    newNode->next = NULL;

    while (*walk != NULL) {
        walk = &(*walk)->next;
    }

    *walk = newNode;

    return newNode;
}

void UpdateNode(Node **primary, int value, int newValue)
{
    Node* current = *primary;
    while (current != NULL)
    {
        if (current->info == value)
        {
            current->info = newValue;
            break;
        }
        current = current->next;
    }
}
void Showback(struct Node **start) {
  	struct Node* prev = NULL;
    struct Node* next = NULL;
    struct Node* current = *start;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *start = prev;
}
void SwapNode(struct Node **head, int val1, int val2)
{
 
    struct Node *pre1 = NULL, *now1 = *head;
    while (now1 && now1->info != val1) {
        pre1 = now1;
        now1 = now1->next;
    }
 
    struct Node *pre2 = NULL, *now2 = *head;
    while (now2 && now2->info != val2) {
        pre2 = now2;
        now2 = now2->next;
    }
 
    if (now1 == NULL || now2 == NULL)
        return;
 
    if (pre1 != NULL)
        pre1->next = now2;
    else 
        *head = now2;
 
   
    if (pre2 != NULL)
        pre2->next = now1;
    else 
        *head = now1;
 
    
    struct Node* temp = now2->next;
    now2->next = now1->next;
    now1->next = temp;
}


int main(){
    struct Node *start;
    start = NULL;
    AddNode( &start, 1 ); 
    AddNode( &start, 2 );
    AddNode( &start, 3 ); 
    AddNode( &start, 4 ); 
    ShowAll(start);
    UpdateNode(&start,4 ,99);
    ShowAll(start);
    Showback(&start);
    ShowAll(start);
    SwapNode(&start, 1, 3);
    ShowAll(start);
    return 0;
}


