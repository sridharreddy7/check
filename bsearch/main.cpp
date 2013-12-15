//
//  main.cpp
//  bsearch
//
//  Created by Sridhar on 21/09/12.
//  Copyright (c) 2012 Sridhar. All rights reserved.
//

#include <iostream>
using namespace std;
#define null 0
typedef struct linkedlist
{
    int num;
    struct linkedlist *r;
    struct linkedlist *l;
    
}dlist;
dlist *root=null;
void create()
{
    
    dlist *new1,*temp1,*temp2;
    new1=(dlist *)malloc(sizeof(dlist));
    cout<<"Creating a new node"<<endl;

    cout<<"enter number"<<endl;
    cin>>new1->num;
    new1->l=null;
    new1->r=null;
    if(root==null)
    {
        
        root=new1;
        return;
    }
    temp1=root;
    temp2=root;
    while(temp2!=null)
    {
        temp1=temp2;
        if(new1->num > temp1->num)
            temp2=temp2->r;
        if(new1->num < temp1->num)
            temp2=temp2->l;
    }
    if(new1->num > temp1->num)
    {    temp1->r=new1;
        cout<<"this number added to right   "<<temp1->num<<endl;
        
    }
    else
    {  temp1->l=new1;
        cout<<"this number added to left "<<temp1->num<<endl;
    
    }
}

void bsearch()
{int n;
    dlist *temp1,*temp2;
    cout<<"enter number to search"<<endl;
    cin>>n;
    temp1=root;
    temp2=root;
    if(temp1->num==n)
    {cout<<"found"<<endl;
        return ;}
    else
    {
    while(temp2!=null)
    {temp1=temp2;
        
        if(n>temp1->num)
            temp2=temp2->r;
        if(n<temp1->num)
            temp2=temp2->l;
        
    
    if(temp1->num==n)
    {
        cout<<"found"<<endl;
        return;
    }
    }
    if(temp2==null && temp1->num!=n)
        cout<<"not found"<<endl;
    
    }
}

int main(int argc, const char * argv[])
{int i=0;
    while(i<10)
{
        create();

    i++;}
    while(1)
    bsearch();

    return 0;
}




