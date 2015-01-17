#ifndef UNSORTEDARRAYLIST_H
#define UNSORTEDARRATLIST_H

#include <string>
#include <iostream>

const int MAX_SIZE = 10000;

typedef string; //need help here

class UnsortedArrayList
{
private:
	string USAList[MAX_SIZE];
	int size;

public:
	UnsortedArrayList::UnsortedArrayList();

	bool UnsortedArrayList::add(string song);
	//add item to the back to the list
	//pre:size<MAX_SIZE
	//post: music added to the list

	bool UnsortedArrayList::remove();
	//remove item by searching for the music name
	//pre: music name must exist and look for the position of the music if it exist
	//post: music deleted

	bool UnsortedArrayList::display();
	//just display lor

};
#endif