#include <iostream>

using namespace std;

struct node {
string name;
string ip;
string mac;
node *next;
};
void creat_list(node *p){
int n;
node *tmp=NULL;
for(;;){
    cout <<"enter any number to contein or 0 for stop : ";
    cin>> n;
    if (n==0){
        delete tmp->next;
        tmp->next = NULL;
        break;
    }else
      {
       cout << "enter name oh computer : ";
       cin>> p->name;
       cout << "enter ip oh computer : ";
       cin>> p->ip;
       cout << "enter mac oh computer : ";
       cin>> p->mac;

       p->next = new node;
       tmp=p;
       p=p->next;
      }
      }
}
void print_list(node *p){
    cout << "-------------------"<<endl;
    cout << "   computer info \n";
    cout << "-------------------"<<endl;

    while(p!=NULL){
        cout << " name of computer : "<<p->name<<endl;
        cout << " ip of computer : "<<p->ip<<endl;
        cout << " mac of computer : "<<p->mac<<endl;
        cout << "-------------------"<<endl;

            p = p->next;
        }
        cout << endl;
}
int counterlist ( node *p)
{
    int count=0 ;
    while (p!=NULL)
    {
        count ++;
        p=p->next;
    }
    return count ;
}

int main()
{
node *head =new node;
creat_list(head);
print_list(head);
cout << "numbers of computer is :"<<counterlist(head);

    return 0;
}
