#pragma once
#ifndef ITEM_H
#define ITEM_H
#include<string>
using namespace std;
class Item {
private:
	string name;
public:
	Item(string name) : name(name) {}
	string getName();
};
#endif // !ITEM_H
