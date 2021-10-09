#include<stdio.h>
struct Node{
    int coeff ;
    int exp;
    struct Node *next;
}*head = NULL;
void create(struct Node *t){
    
    while(t->coeff != -1 && t->exp != -1){
        struct Node *temp;
        temp = (struct Node *)malloc(sizeof(struct Node));
       printf("Enter the value of  coeff and exp");
        scanf("%d%d",&t->coeff,&t->exp);
        t->next = NULL;
    }
   

}
int main(){
    
    return 0;
}