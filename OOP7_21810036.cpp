#include<iostream>
#include<list>
#include<stdlib.h>
using namespace std;

void display(list<int> &l)
{
    list<int>::iterator itr=l.begin();
    cout<<endl;
    for(itr=l.begin(); itr!=l.end(); itr++)
    {
        cout<<*itr<<"\t";
    }
}

void ins(list<int> &l)
{
    int val;
    cout<<"Enter value to insert : ";
    cin>>val;
    l.push_back(val);
    //l.insert(l.end(),val);
}

int main()
{
    list<int> l1;
    list<int> l2;

    int value;
    cout<<"Enter size of both lists : ";
    cin>>value;

    for(int i=0; i<value; i++)
    {
        int element;
        cout<<"Element : ";
        cin>>element;
        l1.push_back(element);
        l2.push_back(element+9);
    }

   while(true)
   {
       cout<<endl;
       int choice;
       cout<<"1.Display\n2.Sort\n3.Empty\n4.Insert\n5.Reverse\n6.Unique\n7.Exit\nChoice>> ";
       cin>>choice;
       switch(choice)
       {
           case 1: display(l1);    display(l2);
                   break;
           case 2: l1.sort();      l2.sort();
                   break;
           case 3: if(l1.empty())
                     cout<<"List 1 is empty\n";
                    else
                     cout<<"List 1 is not empty\n";
                    if(l2.empty())
                     cout<<"List 2 is empty\n";
                    else
                     cout<<"List 2 is not empty\n";
                   break;
           case 4: ins(l1);        ins(l2);
                   break;
           case 5: l1.reverse();   l2.reverse();
                   break;
           case 6: l1.unique();    l2.unique();
                   break;
           case 7: exit(0);
       }
   }
    return 0;
}
