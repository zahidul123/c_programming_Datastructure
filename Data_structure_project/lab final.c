#include<stdio.h>
#include<stdlib.h>
struct node{
      int data;
      struct node *next;
};
struct node *header, *ptr,*temp,*start;
void insert_front()
{
    int value;
    printf("enter the value that include in node:");
    scanf("%d",&value);
    temp=(struct node*)malloc(sizeof(struct node));
    ptr=header;
    temp->data=value;
    temp->next=ptr->next;
    header->next=temp;
}
void insert_end()
{
    int value;
    printf("enter the value that include in node");
    scanf("%d",&value);
    temp=(struct node*)malloc(sizeof(struct node));
    ptr=header;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    temp->data=value;
    temp->next=NULL; //ptr->next=NULL;
    ptr->next=temp;

}
void insert_anywhere()
{
    int value,key;
    printf("enter the value that include in node: ");
    scanf("%d",&value);
    printf("enter the key where new node is create: ");
    scanf(" %d",&key);
    temp=(struct node*)malloc(sizeof(struct node));
    ptr=header;
    while(ptr->next!=NULL&& ptr->data!=key){
        ptr=ptr->next;
    }
    if(ptr->data== key){
        temp->data= value;
        temp->next=ptr->next;
        ptr->next=temp;
    }
    else{
         printf("value %d is not found\n",key);
    }
}
void search()
{
     int value;
    printf("enter the value that search in node");
    scanf("%d",&value);
    ptr=header;
     while(ptr->next!=NULL&& ptr->data!=value){
        ptr=ptr->next;
    }
    if(ptr->data== value){
        printf("The number %d is found in link list");
    }
    else
        printf("value %d is not found\n");
}
void delete_any()
{
      int value;
      printf("enter the value that delete from node");
      scanf("%d",&value);
      ptr=header;
      while(ptr->next!=NULL&& ptr->data!=value){
        ptr=ptr->next;
    }
     if(ptr->data== value){
     temp=ptr->next;
     ptr->next=temp->next;
     free(temp);
    }
    else
        printf("value %d is not found\n");
}
void display()
{
    printf("\n counted link list elements are :\n");
    ptr=header;
    while(ptr->next!=NULL){
        ptr=ptr->next;
        printf("%d\n",ptr->data);
    }

}
int main()
{
    int count=1,num;
    header=(struct node*)malloc(sizeof(struct node));
    header->data= NULL;
    header->next= NULL;
    while(count==1){
        printf("Num .1 for insert front\n");
        printf("Num .2 for insert end\n");
        printf("Num .3 for insert any where\n");
        printf("Num .4 for  delete\n");
        printf("Num .5 for insert are display\n");
        printf("enter your choose number");
        scanf("%d",&num);
        switch(num){
        case 1:
                insert_front();
                 break;
        case 2:
                insert_end();
                break;
        case 3:
               insert_anywhere();
               break;
        case 4:
               delete_any();
               break;
        case 5:
              display();
              break;
        default:
            exit(0);
        }
        printf("do you want to continue(1/0):\n");
        scanf("%d",&count);
    }

    return 0;

}

