#include<bits/stdc++.h>
using namespace std;
typedef int ElemType;
typedef struct LNode
{
     ElemType   data;       //数据域
     struct LNode  *next;   //指针域
}
LNode,*LinkList;
//结点定义

void ReverseList(LinkList l,int n)
{
        for(int i=0;i<n;i++)
        {
                LNode *newnode=new LNode;
                cout << "Please enter data" << endl;
                cin>>newnode->data;
                newnode->next=l->next;
                l->next=newnode;
        }
}

int main()
{
        int n;
        cout << "Please enter n" << endl;
        cin>>n;
        LNode *L=new LNode;
        L->data=n;
        L->next=NULL;
        ReverseList(L,L->data);
        L=L->next;
        while(L)
        {
                cout<<L->data<<" ";
                L=L->next;
        }
}
