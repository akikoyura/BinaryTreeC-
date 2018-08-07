#pragma once
#include<iostream>
#include<string>
using namespace std;
class Bnode
{
public:
	string val;
	Bnode *pleft;
	Bnode *pright;
	//constructor for Node
	Bnode(string s) { val = s; pleft = pright = nullptr; }
};

