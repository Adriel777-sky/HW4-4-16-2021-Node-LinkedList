/*Adriel A. Okolo
HW4 Program1 4/16/2021
c++ program that uses nudes, Linkedlist and void functions. */

#include<iostream>

using namespace std;
struct node{
   int data;
   node * next;
};

class IntegerLinkedList{
   private:
       node* head;
       int counter;
   public:
       //constructor
       IntegerLinkedList(){
           head = NULL;
           counter = 0;
       }
       node* createNode(int value){
           node* temp = new node;
           temp->data = value;
           temp->next = head;
           head = temp;
           counter++;
           return head;
       }
       void display(){
           node* temp = head;
           for(int i = 1; i <= counter;i++){
               cout << temp->data << " ";
               temp = temp->next;
           }
       }
};
int main(){
   IntegerLinkedList list;
   int n;
   cout << "Enter 5 numbers : " ;
   for(int i = 0; i < 5; i++){
       cin >> n;
       list.createNode(n);
   }
   cout << "Dispalying all elements in the list : \n";
   list.display();
  
  
   return 0;
}

