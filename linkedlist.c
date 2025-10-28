#include<stdio.h>
#include<stdlib.h>

struct node_t{
    int data;
    struct node_t* link;
};
int insert_node_end(struct node_t** head_p,struct node_t * node);
void print_list(struct node_t* head);
int insert_node_first(struct node_t** head_p, struct node_t* node);
struct node_t* link =NULL;
int main()
{
    struct node_t *head=NULL;
    struct node_t *head_1=NULL;
    int return_value,i =3;
    for(int i =5;i>0;i--){
        struct node_t * new_node =(struct node_t*)malloc(sizeof(struct node_t));
        new_node->data =i*10;
        return_value = insert_node_end(&head,new_node);
    }
    print_list(head);
    for(int i =5;i>0;i--){
        struct node_t * new_node =(struct node_t*)malloc(sizeof(struct node_t));
        new_node->data =i*12;
        return_value = insert_node_first(&head_1,new_node);
    }
    print_list(head_1);
}
int insert_node_end(struct node_t** head_p,struct node_t * node){
    if(head_p == NULL|| node == NULL){
        return -1;
    }
    node->link = NULL;
    //if the node is the first node in list
    if(*head_p ==NULL){
        *head_p =node;
        return 0;
    }
       //if the node is not the first node in list-traverse till end node
       //create a temp Node
    struct node_t *temp= *head_p;
    while(temp->link !=NULL){
        temp = temp->link;
        
    } 
    temp->link =node;
    return 0;


}
void print_list(struct node_t* head){
    struct node_t* temp =head;
    while(temp !=NULL){
        printf("%d ->",temp->data);
        temp =temp->link;
    }
    printf("NULL\n");

}
int insert_node_first(struct node_t** head_p, struct node_t* node){
    if(head_p ==NULL||node ==NULL){
        return -1;
    }
    node->link =*head_p;
    *head_p =node;
    return 1;
}