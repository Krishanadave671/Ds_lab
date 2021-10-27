#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*head;
// check heap memory is full or not 
int checkllisfull(struct Node *ptr){
    if(ptr == NULL){
        printf("Heap is full");
        return 1;
    }
    else{
        return 0;
    }
}
// checking ll is empty or not
int checkllisEmpty(){
    if(head == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

void  Deleteatbeginning(){
    struct Node *t = head;
    if(checkllisEmpty()){
        printf("Linked list is empty\n");
    }
    else{

        head = t->next;
        t->next = NULL; 
        printf("Element %d is deleted\n", t->data); // is it cumpulsory ?  
        free(t); 
         }

}
int Deletetheval(){
    int val;
    printf("Enter the value you want to delete\n");
    scanf("%d", &val);
    struct Node *t = head,*ptr = NULL;
    if(val == head->data){
        Deleteatbeginning();
    }
    else{
         while(t){
        if(t->data == val){
           ptr->next = t->next;
           t->next = NULL;
           printf("Element %d is deleted\n", val);
           return 0;
        }
        ptr = t;
        t = t->next;
    }
    }
   
}

void InsertatBeginning(int val){
    struct Node * t;
    if(checkllisEmpty()){
        head = (struct Node *)malloc(sizeof(struct Node));
        head->data = val;
        head ->next = NULL; 
  }
  else{
      t = (struct Node *)malloc(sizeof(struct Node));
      if(checkllisfull(t)){

      }
      else{
           t->data = val;
           t->next = head;
           head = t;
  }
      }
     
}
void Insertatend(){
    int val;
    printf("Enter the value you want to insert at end\n");
    scanf("%d", &val);
    struct Node *t = head;
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    if(checkllisfull(ptr)){

    }
    else{
         ptr->data = val;
         ptr->next = NULL;
         while(t->next != NULL){
         t = t->next;
    }
    t->next = ptr;
    }
   
}
int Deleteatend(){
    struct Node *t = head,*last;
    last = t;
    while(t->next != NULL){
        last = t;
        t = t->next;
    }  
    last->next = NULL;
    printf("Element %d is deleted\n", last->data);
     
}
int Insertpos(){ // pos starts from  1; 
    int value, pos;
    printf("Enter position and value\n");
    scanf("%d%d", &pos,&value);
        struct Node *t = head, *ptr = NULL,*last = NULL;
        if(pos == 1){
            InsertatBeginning(value);
        }
        else if(pos > 1 ){
             ptr  = (struct Node *)malloc(sizeof(struct Node));
             if(checkllisfull(ptr)){
             }
             else{
                  ptr->data = value;
                ptr->next = NULL;
                for(int i = 1; i<pos- 1;i++){
                 t = t->next;
             }
                 ptr->next = t->next;
                 t->next = ptr;
             }
           
            
        }
        }

void createll(int n){
    struct Node *t,*last;
    head = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data for first Node \n");
    scanf("%d", &head->data);
    head->next = NULL;
    last = head;
    for(int i = 1; i < n; i++){
        t = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the data for a node\n");
        scanf("%d", &t->data);
        t->next = NULL;
        last->next = t;
        last = t;  
    }
    }

     void Display(){
         struct Node *t;
         t = head;
         printf("Elements are : ");
         while(t){
             printf("%d ", t->data);
             t = t->next;
         }
         printf("\n");
     }


int main(){
    int r ;
    int n,del,ins,val;
    printf("Enter the size of Linkedlist you want to create \n");
    scanf("%d", &n);
    createll(n);
     printf("Enter the Number according to operations in singly Linked list\n");
    do{
        int choice;
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        scanf("%d", &choice);
       
        switch (choice)
        {
        case 1:
             printf("1. InsertatBeginning\n2. Insert at position\n3. Insert at end\n");
             scanf("%d", &ins);
            switch (ins)
            {
            case 1:
            
            printf("Enter the value \n");
            scanf("%d", &val);
                InsertatBeginning(val);
                break;
                case 2:
                Insertpos();
                break;
                case 3:
                Insertatend();
                break;
            }
            break;
           
        case 2:
             
             printf("1.Delete at Beginning\n2.Delete the value\n3.Delete at end\n");
             scanf("%d", &del);
            switch (del)
            {
            case 1:
               Deleteatbeginning();
                break;
            
            case 2: 
               Deletetheval();
                break;
            case 3: 
               Deleteatend();
                break;
            }
            break;
        case 3:
            Display();
            break;
        case 4:
            r = 0;
           break;
        default:
           printf("Invalid input\n");
        }
      

    }while(r);
    


    return 0;
}