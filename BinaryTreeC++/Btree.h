#pragma once
#include<iostream>
#include<string>
#include"Bnode.h"

using namespace std;
class Btree
{
private:
	Bnode* root;
	Bnode* insert_at_sub(string s, Bnode* p);
	void print_sub(Bnode* p);
public:
	//constructor for binary tree
	Btree() { root = nullptr; }
	void insert(string s)
	{
		//initilize a new node 
		root = insert_at_sub(s, root);
	}
	void print()
	{
		print_sub(root);
	}
};

