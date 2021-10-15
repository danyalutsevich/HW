

#include <iostream>
#include "Tree.h"


int main()
{
	Tree<int,int> tree;

	for (int i = 0; i < 300; i++)
	{
		tree.add(i%15,i);
		

	}
	tree.print();
	//tree.find(2);


}







