#include<stdio.h>
#include<stdlib.h>  
struct node{
    int data;
    struct node*lchild;
    struct node*rchild;   
};
struct node*insert(struct node*p,int key)
{
    struct node*t;
    if(p==NULL)
    {
          t=(struct node*)malloc(sizeof(struct node));
          t->data=key;
          t->lchild=t->rchild=NULL;
          return t;
    }
    if(key < p->data)
    {
        p->lchild=insert(p->lchild,key);
    }
    else if(key > p->data)
    {
        p->rchild=insert(p->rchild,key);
    }
return p;
}
struct node*Rsearch(struct node*t,int key)
{
if(t==NULL)
   return;
if(key==t->data)
   return t;
else if(key < t->data)
   return Rsearch(t->lchild,key);
   else
   return Rsearch(t->rchild,key);  
}
void inorder(struct node* root)
{
    if(root!=NULL)
    {
        inorder(root->lchild);
        printf("%d ",root->data);
        inorder(root->rchild);
    }
}
int getleafcount(struct node*p)
{
    if(p==NULL)
     return 0;
    if(p->lchild==NULL&&p->rchild==NULL)
    return 0;
    else
    return (getleafcount(p->lchild)+getleafcount(p->rchild));
}
int main()
{   struct node*temp;
   struct node*root=NULL;
   root=insert(root,30);
   insert(root,20);
   insert(root,25);
  // insert(root,25);
   insert(root,50);
   inorder(root);
    temp=Rsearch(root,20);
    if(temp!=NULL)
    {
        printf("Element %d is found",temp->data);
    }
    else{
        printf("Element NOt Found");
    }
    getleafcount(root);
   return 0;            

}