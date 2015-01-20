#include <iostream>
#include <fstream>
#include <string>
#include "SortedArrayList.h"
#include "UnsortedArrayList.h"
#include "UnsortedPointerList.h"

using std::cout;
using std::cin;
using std::endl;

int readSongs()
{
	int noOfSongs = 0, count = 0;
	string song;
	cout << "How many songs would you like to import? ";
	cin >> noOfSongs;
	ifstream sfile("mxm_779k_matches.txt");
	if (sfile.is_open())
	{
		while (noOfSongs > count)
		{
			//testing
			getline(sfile, song);
			if (song[0] != '#')
			{
				cout << song << endl;
				count++;
			}
		}
		sfile.close();
	}
	else
		cout << "Unable to open file" << endl;
	cout << " " << endl;
	return 0;
}

int main()
{
	int option = -1; //default
	while (option != 0)
	{
		cout << "Welcome to DSA Assignment AY1415" << endl;
		cout << "====================================" << endl;
		cout << "What would you like to do?" << endl;
		cout << "" << endl;
		cout << "[1] Import the songs into the program" << endl;
		cout << "[2] Remove a song" << endl;
		cout << "[3] Search a song using Sequential Search" << endl;
		cout << "[4] Search a song using Binary Search" << endl;
		cout << "[0] End the program" << endl;
		cout << "" << endl;
		cout << "Enter your option : ";
		cin >> option;
		cout << "" << endl;
		switch (option)
		{
		case 0:
			option = 0;
			break;
		case 1:
			//Import songs
			readSongs();
			break;
		case 2:
			//Add songs
			break;
		case 3:
			//Remove songs
			break;
		case 4:
			//Search using sequential search
			break;
		case 5:
			//search using binary search
			break;
		default:
			cout << "Invalid Option! Please choose again." << endl;
			break;
		}
	}
}