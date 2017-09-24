#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *right;
    struct node *left;
} ;

struct node *create_bst(struct node *head,int val)
{



 if(head==NULL)
 {
     struct node *nn;
 nn=(struct node*)malloc(sizeof(struct node));
 nn->data=val;
     head=nn;
     nn->right=NULL;
     nn->left=NULL;
 }

 else if(head->data>=val)
        head->right=create_bst(head->right,val);
 else
    head->left=create_bst(head->left,val);

 return head;
}
int display(struct node *head)
{
    if(head==NULL)
    {
        return;
    }
    else{
            display(head->left);

        printf("%d",head->data);
         display(head->right);
    }
}

void main()
{
    int n,val;
    struct node *head=NULL;
    scanf("%d",&n);
    while(n)
    {
        scanf("%d",&val);
        head=create_bst(head,val);
        n--;
    }
    display(head);
}
