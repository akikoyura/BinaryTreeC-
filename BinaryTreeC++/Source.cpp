#include<iostream>
#include<string>
#include"Btree.h"
using namespace std;

int main()
{
	Btree my_tree;
	string sPrompt = "Enter a name (ENTER when done): ";
	string sInput = "";
	while (true)
	{
		cout << sPrompt;
		getline(cin, sInput);
		if (sInput.length() == 0)
		{
			break;
		}
		my_tree.insert(sInput);
	}
	cout << "Here are the names,in order." << endl;
	my_tree.print();
	system("pause");
	return 0;
}