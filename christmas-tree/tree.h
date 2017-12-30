#pragma once

#ifndef tree_h
#define tree_h

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#if defined _WIN32 || defined _WIN64
#include <Windows.h>
#include <conio.h>
#endif

using namespace std;

class Tree {
	static const int LENGTH = 25;
	string *tab;
public:
	Tree();
	~Tree();
	void displayTree();
	string exportTree();
	void addChains();
	void addStar();
	void addSweets();
	void addGlassBalls();
	void addLamps();
	void displayMenu();
	void clearScreen();
	void turnOn();
};

#endif // tree_h
