#pragma once
#include "Btree.h"
#include<iostream>
using namespace std;
Bnode* Btree::insert_at_sub(string s,Bnode* p)
{
		if(!p)
		{
			//initialize a new node if root does not exist
			return new Bnode(s);
		}
		else if(s<p->val)
		{
			p->pleft = insert_at_sub(s, p->pleft);
		}
		else if (s > p->val)
		{
			p->pright= insert_at_sub(s, p->pright);
		}
		return p;
}
void Btree::print_sub(Bnode* p)
{
	if (p)
	{
		print_sub(p->pleft);
		cout << p->val << endl;
		print_sub(p->pright);
	}
}
