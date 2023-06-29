#include <iostream>
#include <stdio.h>
using namespace std;
struct node{
    int data;
    node *next;

};
class sll{
private:
node *start;
public: 
sll();
void insert_at_beg(int);
void insert_at_last(int);
void insert_at_position(int, int);
void show();
int count();
void del_at_beg();
void del_at_last();
void del_at_position(int);
};

void sll::del_at_beg(){
    if(start==NULL)
    cout<<"deletion is not possible"<<endl;
    else
    {
        node *temp;
        temp=start;
        start=temp->next;
        delete temp;
    }
}
void sll::del_at_last(){
    node *temp;
    temp=start;
    while(temp->next->next!=NULL)
    temp=temp->next;
    delete temp->next;
    temp->next=NULL;
}
void sll::del_at_position(int position){
    int i=1;
    node *temp, *temp1;
    temp=start;
    while(i<position-1){
        temp=temp->next;
        temp1=temp->next;
        i++;
    }
    temp->next=temp1->next;
     delete temp1;
}
sll::sll(){
     start=NULL;
}
void sll::insert_at_last(int data){
    node *n=new node;
    n->data=data;
    n->next=NULL;
    if(start!=NULL){
        node *temp;
        temp=start;
        while(temp->next!=NULL)
        temp=temp->next;
        temp->next=n;
    }
    else
    start=n;
}
void sll::insert_at_beg(int data){
    node *n=new node;
    n->data=data;
    n->next=start;
    start=n;
}
void sll::show(){

    node *temp;
    temp=start;
    cout<<"Elements in linked list are"<<endl;
    while(temp->next!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}
int sll::count(){
    node *temp;
    temp=start;
    int count=1;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    return count;
}

void sll::insert_at_position(int data, int position){
    
        node *temp;
        temp=start;
        node *n=new node;
        n->data=data;
        int i=0;
        while(i<position-2){
            temp=temp->next;
            n->next=temp->next;
            temp->next=n;
        i++;
    
}}
int main(){
    sll obj1;
    obj1.insert_at_beg(50);
    obj1.insert_at_beg(40);
    obj1.insert_at_beg(30);
    obj1.insert_at_beg(20);
    obj1.insert_at_beg(10);
    obj1.insert_at_last(500);
    obj1.insert_at_position(4,3);
   obj1.del_at_beg();
    obj1.del_at_last();
    obj1.del_at_position(3);
    obj1.show();

}